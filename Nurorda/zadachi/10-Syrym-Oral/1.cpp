#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;
vector < int > g[200009];
int i,x,y,n,m,fup[200009],tin[200009],tim,ans[200009],col;
bool was[200009],w[200009];
void get_ans(int x)
{
	w[x] = true;
}
void dfs(int v,int p)
{
	int child = 0;
	was[v] = true;
	tin[v] = fup[v] = ++tim;
	for (int i = 0; i < g[v].size(); i++)
	{
		int to = g[v][i];
		if (to == p) continue;	
		if (!was[to])
		{
			dfs(to,v);
				fup[v] = min(fup[v] , fup[to]);
					if (fup[to] >= tin[v] && p != -1) get_ans(v);
        child++;
		}else
			fup[v] = min(fup[v],tin[to]);

	}
	if (child > 1 && p == -1)
		get_ans(v);
}
int main()

{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	scanf("%d%d",&n,&m);
	for (i = 1; i <= m; i++)
	{
		scanf("%d%d",&x,&y);
		g[x].push_back(y);
		g[y].push_back(x);
	}

	for (i = 1; i <= n; i++)
		if (!was[i]) dfs(i,-1);

	for (i = 1; i <= n; i++)
		if (w[i] == true) col++,ans[col] = i;
	printf("%d\n",col);
	for (i = 1; i <= col; i++)
		printf("%d\n",ans[i]);
    return 0;
}
