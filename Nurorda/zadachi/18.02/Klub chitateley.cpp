#include<iostream>
#include<vector>
using namespace std;
long long int k;
vector < int > g[111111];
int main()
{long long int n,m,a,b;
cin>>n>>m;
for(int i=1;i<=m;i++)
{cin>>a>>b;
g[a].push_back(b);
}   
for(int i=1;i<=n;i++)
{if(g[i].size()==0)k++;}
cout<<k+1;
//system("pause");
return 0;    
}
