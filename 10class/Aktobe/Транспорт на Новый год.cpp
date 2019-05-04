#include<iostream>
#include<vector>
#include<cstdio>
#define pb push_back
#include<cstdio>
using namespace std;
vector< int >g[11111];
bool used[11111];
void dfs (int s) 
{       
 used[s] = true;        
 for (size_t i=0; i<g[s].size(); ++i) 
 {    int to = g[s][i];               
  if (!used[to])                       
   dfs (to);
}
}

int main()
{
int n,m,x;
cin>>n>>m;
for(int i=1;i<=n-1;i++)
{
	cin>>x;
	g[i].pb(x+i);
}
for(int i=1;i<=n;i++)
{
	used[i]=false;
}
used[1]=true;
dfs(1);
if(used[m])
cout<<"YES";
else cout<<"NO";
return 0;
}
