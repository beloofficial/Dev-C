#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int m,n,p[555555];
vector<pair<int ,pair<int , int > > > g;
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
void unite (int a,int b)
{
	a=get(b);
	b=get(b);
	if(a!=b)p[a]=b;
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x,y,w;
		cin>>x>>y>>w;
		g.push_back(make_pair(w,make_pair(x,y)));
	}
	int cost = 0;
	 vector < pair<int,int> > res; 
	 sort (g.begin(), g.end()); 
	 vector<int> tree_id (n);
	  for (int i=0; i<n; ++i)        
	  p[i] = i; 
	  for (int i=0; i<m; ++i) {       
	   int a = g[i].second.first,  b = g[i].second.second,  l = g[i].first;
		if(get(a)!=get(b))
		{
			cost+=l;
			unite(a,b);
		}
	}
		cout<<cost;
		return 0;
	
}
