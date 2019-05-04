#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n,a,b,l,r,d[11111];
vector < int > g[11111];
queue < int > q;
bool used[1111];
void bfs (int l,int r)
{
 used[l]=1;
 while(!q.empty())
 {
                  int v=q.front();
 q.pop();
 for(int i=0;i<g[v].size();i++)
 {
 int to = g[v][i];
if (!used[to]) {
used[to] = true;
q.push(to);
d[to] = d[v] + 1;        
 }      
 }               
 }
}
int main()
 {cin>>n;
for(int i=1;i<=n;i++)
{cin>>a>>b;
 g[a].push_back(b);
  g[b].push_back(a);
}
  cin>>l>>r;
  q.push(l);
  bfs(l,r);
  cout<<d[r];
system("pause");
return 0;    
} 
