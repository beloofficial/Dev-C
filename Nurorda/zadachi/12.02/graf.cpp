//---------------------------------------\\
int v,f,used,t;
    void dfs(int v,int p);
used[v]=1;f[v]=t[v]=++time;


for(int h=head[v];h!=0;h=next[h])
int to=s[h];
if(to==p)continue;
if(used[to])f[v]=min(f[v],f[to]);
else {
     dfs(to,v);
     f[v]=min(f[v],f[to]);
     if(f[to]>f[v])
     cout<<h;
     }
//-----------------------------------------\\
