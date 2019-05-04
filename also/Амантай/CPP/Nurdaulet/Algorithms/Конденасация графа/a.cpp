#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<vector>
#include<iostream>
#include<algorithm>

#define sqr(a) ((a)*(a))
#define eps 1e-9
#define INF 2147483647
#define N 1000*1000*1000
#define cub(a) ((a)*(a)*(a))

using namespace std;

int n,m,x[100009],y[100009],i,j,was[100009],v,r=0,c[100009],l,ans;

struct Pair{ int u; int v;}a[100009];

vector < int > g[100009],com,gr[100009],top;

bool cmp(Pair q, Pair w)
{
	return(q.u < w.u || (q.u==w.u && q.v < w.v));
}
void dfs(int x)
{
	was[x] = 1;
	for (int i = 0; i < g[x].size();i++)
	{
		int to = g[x][i];
		if (was[to] == 0) dfs(to);
	}
	top.push_back(x);
}
void dfs1(int x)
{
	was[x] = r;
	for (int i = 0; i < gr[x].size();i++)
	{
		int to = gr[x][i];
		if (was[to] == 0) dfs1(to);
	}
}

int main()

{
	freopen("condense2.in","r",stdin);
	freopen("condense2.out","w",stdout);
	cin >> n >> m;
	for (i = 1; i <= m; i++)
	{
		cin >> x[i] >> y[i];
		g[x[i]].push_back(y[i]);
		gr[y[i]].push_back(x[i]);
	}

	for (i = 1; i <= n; i++)
		if (was[i] == 0) dfs(i);

	memset(was,0,sizeof(was));

	for (i = 1; i <= n ;i++)
	{
		v = top[n-i];
		if (was[v] == 0) r++,dfs1(v);
	}
	for (i = 1; i <= m; i++)
    {
        if (was[x[i]] != was[y[i]])
        {
			a[i].u = was[x[i]];
			a[i].v = was[y[i]];
    
        }
    }
    
    sort(a+1,a+m+1,cmp);

	for (i = 1; i <= m; i++)
		if (a[i].u != a[i-1].u || a[i].v != a[i-1].v) ans++;
	
    cout << ans;
	return 0;
}
