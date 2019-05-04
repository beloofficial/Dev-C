
void dfs(int x)
{
w[x]=1;
tin[x]=++t;
for(int i=0;i<g[x]size();i++)
{
int to=g[x][j];
if(!w[to])
dfs(to);        
}    
tout[x]=++t;
}
