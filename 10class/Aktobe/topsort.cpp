#include<iostream>
#include<vector>
#include<cstdio>
#include<queue>
#include<algorithm>
#define pb push_back
#include <cstdlib>
#include<stdio.h>
using namespace std;
vector<int> g[11111],ans;
bool used[11111];
long long int n,x,y,m,k=0;
void dfs(int v)
{
 used[v]=true;
 for(int i=0;i<g[v].size();i++)
 {
  int to=g[v][i];
  if(!used[to])
  {
   dfs(to);
  }
  else if(used[to]&&to==n)
  {
  k++;break;}
 }
 ans.pb(v);
}
void top_sort()
{
 for(int i=0;i<m;i++)
 {
  used[i]=false; 
 }
 ans.clear();
 for(int i=0;i<m;i++)
 
 {
  if(!used[i])dfs(i);
 }
 reverse(ans.begin(),ans.end());
}
////////////////////////////////////////////////////////////////////
int main()
{//freopen("topsort1.in","r",stdin);
//freopen("topsort1.out","w",stdout);
//ios_base::sync_with_stdio(0);
 cin>>m>>n;
 for(int i=1;i<=m;i++)
 {
  cin>>x>>y;
  g[x].push_back(y);
 }
 top_sort();
 for(int i=0;i<ans.size()-1 ;i++)
 {
  cout<<ans[i]<<" ";
 }
 return 0;
}

