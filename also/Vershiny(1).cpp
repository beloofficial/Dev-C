#include<iostream>
#include<vector>
using namespace std;
int u[1111],ans,x,y,n;
vector<int> g[111];
void dfs(int v)
{       u[v]=1;
for(int i=0;i<g[v].size();i++)
{
        int to=g[v][i];
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
system("pause");
return 0;    
}
