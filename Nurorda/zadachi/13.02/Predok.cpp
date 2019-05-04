#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
typedef long long ll;
int p[111111][19],tin[111111],tout[111111],t;
vector < int > e[111111];
void dfs(int v,int pr)
{
    p[v][0]=pr;
        for(int k=1;k<19;k++)
                p[v][k]=p[p[v][k-1]][k-1];
    tin[v]=++t;
    for(ll i=0;i<e[v].size();i++)
        if(e[v][i]!=pr)
            dfs(e[v][i],v);
    tout[v]=++t;
}
int main()
{
    int n,m;
    cin>>n;
    for(int i=0;i<=18;i++)
        p[0][i]=1,p[1][i]=1;
        for(int i=1;i<n;i++)
        {
                int x,y;
                cin>>x>>y;
                e[x].push_back(y);
                e[y].push_back(x);
        }
    dfs(1,0);
    cin>>m;
    while(m--)
    {
        int u,v;
        cin >> u >> v;
        for(int k=18;k>=0;k--)
        {
                if(tin[p[u][k]]<=tin[v] && tout[p[u][k]]>=tout[v])
                        continue;
            u=p[u][k];
        }
        cout << p[u][0] << endl;
        }
        system("pause");
    return 0;
}
