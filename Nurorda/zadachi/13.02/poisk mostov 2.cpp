#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
vector<int> g[111111];
bool used[111111];
int timer,t[111111],f[111111],ans,x,y,n,m,a[111111],q,b[111111],w[111111],e[111111];
void dfs (int v, int p = -1) 
{
	used[v] = true;
	t[v] = f[v];
	for (int i=0; i<g[v].size(); ++i) 
	{
		int to = g[v][i];
		if (to == p)  continue;
		if (used[to])f[v] = min (f[v], t[to]);
		else 
		{
			dfs (to, v);
			f[v] = min (f[v], f[to]);
			if (f[to] > t[v])
			{
				ans++;
				q++;
			}
		}
	}
}
void find_bridges() 
{
	timer = 0;
	for (int i=0; i<n; i++)
	{
		used[i] = false;
	}
	for (int i=0; i<n; i++)
	{
		if (!used[i])dfs (i);
	}
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		g[y].push_back(x);
		g[x].push_back(y);
	}
	find_bridges();
	cout<<q<<endl;
	system("pause");
	return 0;
}
