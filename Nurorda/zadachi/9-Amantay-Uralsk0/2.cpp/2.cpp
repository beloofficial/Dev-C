#include<iostream>
#include<cstdio>
using namespace std;
int u[100000],a[111][111],x,y,n,ans,mx;
void dfs(int v)
{
	u[v] = 1;
	for(int i=0;i<n;i++)
	{
		if(a[v][i]&&!u[i])
		{
			ans++;
			dfs(i);
		}
	}
}
int main()
{
	freopen("2.in","r",stdin);
	freopen("2.out","w",stdout);
	cin>>n;
	for(int i=1;i<n;i++)
	{
		cin>>x>>y;
		a[x][y]=1;
	}
	dfs(n);
	cout<<ans;
	return 0;
}
