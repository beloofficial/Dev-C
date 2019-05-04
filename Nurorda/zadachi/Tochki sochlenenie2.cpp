#include<iostream>
#include<vector>
using namespace std;
vector < int > g[111111];
bool used[111111];
int timer, tin[111111], fup[111111],q[11111],t=1,children;
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
{q[t]=v;t++;cout<<fup[to];}
++children;
}
}
if (p == -1 && children > 1)
{q[t]=v;t++;}
}
int main()
{int m,n,a,b;
cin>>m>>n;
for(int i=1;i<=n;i++)
{cin>>a>>b;
g[a].push_back (b);
g[b].push_back (a);
}
    dfs(0);
    for(int i=1;i<=t;i++)
    {cout<<q[i]<<" ";}
    cout<<children;
system("pause");
return 0;    
}
