#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
int m,n;
int p[555555];
vector< pair < int , pair < int , int > > >g;
int get (int v) 
{
	if(p[v]==v)
	{
		return v;
	}
	else
	{
		return p[v]=get(p[v]);
	}
}
void unite (int a, int b) 
{
	a = get (a);
	b = get (b);
	if (a != b) p[a] = b;
}
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x,y,w;
		cin>>x>>y>>w;
		g.push_back(make_pair(w,make_pair(x,y)));	
	}
	int cost = 0;
	sort (g.begin(), g.end());
	for (int i=1; i<=n; ++i)
	p[i] = i;
	for (int i=0; i<m; ++i) 
	{
		int a = g[i].second.first,  b = g[i].second.second,  l = g[i].first;
		if (get(a) != get(b)) 
		{
			cost += l;
			unite (a, b);
		}
	}
	cout<<cost;
	return 0;
}
