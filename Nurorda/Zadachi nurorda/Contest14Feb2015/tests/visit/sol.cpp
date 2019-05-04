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

  int n, m;
  cin >> n >> m;
  Graph g(n);
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    g.addEdge(a, b);
  }

  Graph cond = g.condensation();

  vector<int> sorted = cond.topSort();
  vector<int> order(cond.n + 1);
  for (int i = sz(sorted) - 1; i >= 0; --i)
    order[sorted[i]] = sz(sorted) - i;

  cout << cond.n << "\n";
  for (int i = 1; i <= n; ++i)
    cout << order[g.scc[i]] << " \n"[i == n];

  return 0;
}
