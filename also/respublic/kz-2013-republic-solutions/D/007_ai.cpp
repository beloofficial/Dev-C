#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

const int MAXN = 200000;

int a[MAXN];
int b[MAXN];
int w[MAXN];
int f[MAXN];
int fr[MAXN];
int q[1 << 12];
struct E {
  int n, t;
} e[MAXN], er[MAXN];
int u[MAXN];
int d[MAXN];
int c;

void dfs(int v) {
  u[v] = true;
  for (int i = f[v]; i != -1; i = e[i].n) {
    if (!u[e[i].t]) {
      dfs(e[i].t);
    }
  }
  d[c++] = v;
}

void dfs2(int v, int k) {
  u[v] = k;
  for (int i = fr[v]; i != -1; i = er[i].n) if (u[er[i].t] == -1) {
    dfs2(er[i].t, k);
  }
}

int main() {
freopen("D.in", "r", stdin);
freopen("D.out", "w", stdout);

  int B, n, m;
  cin >> B >> n >> m;
  int l = 0;
  for (int i = 0; i < B; ++i) {
    int k; cin >> k;
    for (int j = 0; j < k; ++j) {
      a[l] = 1 << i;
      cin >> b[l];
      ++l;
    }
  }
  memset(f, ~0, sizeof(f));
  memset(fr, ~0, sizeof(fr));
  l = 0;
  for (int i = 0; i < m; ++i) {
    cin >> b[n + i];
    a[n + i] = 0;
    int k; cin >> k;
    for (int j = 0; j < k; ++j) {
      int x;
      cin >> x;
      --x;
      e[l].n = f[n + i]; e[l].t = x; f[n + i] = l;
      er[l].n = fr[x]; er[l].t = n + i; fr[x] = l;
      ++l;
    }
  }

  for (int i = 0; i < n + m; ++i) if (!u[i]) {
    dfs(i);
  }

  memset(u, ~0, sizeof(u));
  c = 0;
  for (int i = n + m - 1; i >= 0; --i) if (u[d[i]] == -1) {
    dfs2(d[i], c++);
  }

  for (int i = 0; i < n + m; ++i) {
    w[u[i]] |= a[i];
  }
  for (int i = 0; i < n + m; ++i) {
    a[i] |= w[u[i]];
    //cout << i << " " << a[i] << " " << b[i] << endl;
  }
  while (true) {
    bool ff = false;
    for (int i = n + m - 1; i >= 0; --i) {
      for (int j = f[d[i]]; j != -1; j = e[j].n) {
        if (a[d[i]] != (a[d[i]] | a[e[j].t])) {
          //cout << a[d[i]] << " " <<  (a[d[i]] | a[e[j].t] << endl;
          ff = true;
        }
        a[d[i]] |= a[e[j].t];
      }
    }
    if (!ff) break;
  }

  memset(q, ~0, sizeof(q));
  for (int i = 0; i < n + m; ++i) {
    if (q[a[i]] == -1 || q[a[i]] > b[i]) {
      q[a[i]] = b[i];
    }
  }
  for (int i = 0; i < 1 << B; ++i) if (q[i] != -1) {
    for (int j = 0; j < 1 << B; ++j) if (q[j] != -1) {
      if (q[i | j] == -1 || q[i | j] > q[i] + q[j]) {
        q[i | j] = q[i] + q[j];
      }
    }
  }

  cout << q[(1 << B) - 1] << endl;
  return 0;
}
