#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
long long int k,v;
bool yn[11111];
vector < int > g[111111];

int main()
{//freopen("7.in","r",stdin);
//freopen("7.out","w",stdout);
    long long int n,m,a,b;
cin>>n>>m;
for(int i=1;i<=m;i++)
{cin>>a>>b;
g[a].push_back(b);
}
for(int i=1;i<=n;i++)
{yn[i]=false;}
for(int i=1;i<=n;i++)
{  
for(int j=0;j<g[i].size();j++)
     {if(!yn[g[i][j]]){yn[g[i][j]]=true;k++;}}
}
cout<<m-k;
system("pause");
return 0;    
}
