#include<iostream>
#include<vector>
using namespace std;
int n,x,y,ans,u[100];
vector<int> g[1000];
void dfs(int v)
{
	u[v] = 1;
	for(int i=0;i<g[v].size();i++)
	{
		int to = g[v][i];
		if(!u[to]) 
		{
			ans++;
			dfs(to);
		}                                        
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		g[y].push_back(x);
		g[x].push_back(y);
	}
	dfs(1);
	cout<<ans+1;
	return 0;
}
