#include<iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include <cstdlib>
#include<stdio.h>
using namespace std;
long long int n,a,b,l,r,d[111111],p[111111];
bool used[111111];
vector < int > g[111111];
queue < int > q;
void bfs(int l,int r)
{
used[l]=1;
while(!q.empty())
{
int v=q.front();
q.pop();
for(int i=0;i<g[v].size();i++)
{
int to=g[v][i];
if(!used[to])
{
used[to]=true;
q.push(to);  
d[to]=d[v]+1;
p[to]=v;           
}        
}              
}        
}
int main()
{//freopen("bfs.in","r",stdin);
//freopen("bfs.out","w",stdout);
long long int x;cin>>n>>l>>r;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=n;j++)
	{
	cin>>x;
	if(x==1)
		{
		g[i].push_back(j);
		g[j].push_back(i);
}}
}
   q.push(l);
   bfs(l,r);
   cout<<d[r];
//system("pause");
return 0;    
}

