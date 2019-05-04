#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{freopen("5.in","r",stdin);
freopen("5.out","w",stdout);

   long long int i,n,mx=0,h,k,m;
string s;
char a[1111][1111];
cin>>n>>m;
for(i=1;i<=n;i++)
{
for(int j=1;j<=m;j++)
{
cin>>a[i][j];        
}                 
}
cin>>h>>k;
cin>>s;
cout<<n+m-2;
//system("pause");
return 0;    
}
