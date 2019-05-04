#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<string>
#include<utility>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include<cmath>
#include<ctime>
#include<map>
using namespace std;
int k,h,m,i=1,v=1;
vector < int > g[111];
bool q[1111];
void dfs(int v)
{         
       for(int i=i;i<=m;i++)
       {
                        for(v=v;v<=m;v++)
                        {h=g[v].size();
                                         for(int j=1;j<=h;j++)
                                         {
                                         if(i==g[v][j])k++;cout<<i;                
                                         }
                        }
                               v++;          
       }
}
int main()
{int m,n,v,b,a;
cin>>m>>n;
for(int i=1;i<=n;i++)
{cin>>a>>b;
g[b].push_back(a);
}
dfs(v);
   cout<<k;
system("pause");
return 0;    
}
