#include<iostream>
#include<vector>
int IS_CUTPOINT;
using namespace std;
const int MAXN=111111;
vector<int> g[MAXN];
bool used[MAXN];
int timer, tin[MAXN], fup[MAXN];
void dfs (int v, int p = -1) {
used[v] = true;
tin[v] = fup[v] = timer++;
int children = 0;
for (size_t i=0; i<g[v].size(); ++i) {
int to = g[v][i];
if (to == p) continue;
if (used[to])
fup[v] = min (fup[v], tin[to]);
else {
dfs (to, v);
fup[v] = min (fup[v], fup[to]);
if (fup[to] >= tin[v] && p != -1)
IS_CUTPOINT(v);
++children;
}
}
if (p == -1 && children > 1)
IS_CUTPOINT(v);
}
int main() {
int n;
cin>>n>>g;
timer = 0;
for (int i=0; i<n; ++i)
used[i] = false;
dfs (0);
system("pause");
return 0;
}
