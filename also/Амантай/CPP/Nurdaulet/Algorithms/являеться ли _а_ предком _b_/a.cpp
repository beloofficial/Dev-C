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
int m,i,n,tin[100009],tout[100009],x,y,root,r;
bool was[100009];
vector < int > g[100009];
void dfs(int x)
{
	tin[x] = ++r;
	for (int i = 0; i < g[x].size(); i++)
	{
		int to = g[x][i];
		dfs(to);
	}
	tout[x] = ++r;
}
int main()

{
	freopen("ancestor.in","r",stdin);
	freopen("ancestor.out","w",stdout);
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> x;
		if (x == 0) root = i;else
		g[x].push_back(i);
	}
	dfs(root);
	cin >> m;
	for (i = 1; i <= m;  i++)
	{
		cin >> x >> y;
		if (tin[x] < tin[y] && tout[x] > tout[y]) cout << 1 <<endl;else
		cout << 0 << endl;
	}
	return 0;
}
