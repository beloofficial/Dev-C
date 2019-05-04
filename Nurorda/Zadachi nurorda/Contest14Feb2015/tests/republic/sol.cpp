#include <bits/stdc++.h>
#define sz(c) ((int)(c).size())
using namespace std;
typedef long long int64;

struct Graph {
  int n;
  vector<vector<int>> adj;
  vector<vector<int>> rev;
  vector<int> scc;
  vector<bool> was;

  Graph(int N): n(N), adj(N + 1), rev(N + 1), scc(N + 1), was(N + 1) {
  }

  void addEdge(int a, int b) {
    adj[a].push_back(b);
    rev[b].push_back(a);
  }

  void dfs(int v, vector<int> &order) {
    was[v] = true;
    for (int u : adj[v])
      if (!was[u])
        dfs(u, order);
    order.push_back(v);
  }

  void markSCC(int v, int cc) {
    scc[v] = cc;
    for (int u : rev[v])
      if (scc[u] == 0)
        markSCC(u, cc);
  }

  vector<int> topSort() {
    vector<int> result;
    fill(was.begin(), was.end(), false);
    for (int v = 1; v <= n; ++v)
      if (!was[v])
        dfs(v, result);
    reverse(result.begin(), result.end());
    return result;
  }

  Graph condensation() {
    int cc = 0;
    fill(scc.begin(), scc.end(), 0);
    for (int v : topSort())
      if (scc[v] == 0)
        markSCC(v, ++cc);
    Graph result(cc);
    for (int v = 1; v <= n; ++v)
      for (int u : adj[v])
        if (scc[v] != scc[u])
          result.addEdge(scc[v], scc[u]);
    return result;
  }
};


int main() {
  ios_base::sync_with_stdio(false);

  int testcase = 0;
  while (true) {
    int n, m;
    cin >> n >> m;
    if (n == 0 && m == 0) break;

    testcase += 1;
    cout << "Case " << testcase << ": ";

    Graph g(n);
    for (int i = 0; i < m; ++i) {
      int a, b;
      cin >> a >> b;
      g.addEdge(a, b);
    }

    Graph cond = g.condensation();

    if (cond.n == 1) {
      cout << "The system is already connected.\n";
    } else {
      int in = 0;
      int out = 0;
      for (int v = 1; v <= cond.n; ++v) {
        if (cond.adj[v].empty())
          out += 1;
        if (cond.rev[v].empty())
          in += 1;
      }
      int result = max(in, out);
      cout << "The minimal number of roads is " << result << ".\n";
    }
  }

  return 0;
}
