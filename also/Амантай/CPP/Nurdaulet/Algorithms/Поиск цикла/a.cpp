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
int was[100009],i,n,m,x,y,ans[100009],l=0,pr[100009];
vector < int > g[100009];
void dfs(int x)
{
	was[x] = 1;
	for (int i = 0; i < g[x].size(); i++)
	{
		int to = g[x][i];
        pr[to] = x;
		if (was[to] == 0) dfs(to);
		if (was[to] == 1)
		{
			cout << "YES"<<endl;
			while (x != to)
			{
				ans[++l] = x;
				x = pr[x];
			}
			ans[++l] = to;
			for (int j = 1; j <= l; j++)
				cout << ans[l-j+1] << " ";
		exit(0);
		}
	}
	was[x] = 2;
}
int main()

{
	freopen("cycle2.in","r",stdin);
	freopen("cycle2.out","w",stdout);
	cin >> n >> m;
	for (i = 1; i <= m; i++)
	{
		cin >> x >> y;
		g[x].push_back(y);
	}
	for (i = 1; i <= n; i++)
		if (was[i] == 0) dfs(i);
	cout << "NO";
	return 0;
}
