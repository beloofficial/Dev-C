#include<iostream>
using namespace std;
int main()
{int i,n,a[1111][3],j,k,l,m=0,b=101;
cin>>n;
for(i=1;i<=n;i++)
for(j=1;j<=2;j++)
{cin>>a[i][j];}
for(i=1;i<=n;i++){
for(k=1;k<=31;k++)
{
if(a[i][1]<=k&&k<=a[i][2])m++;

}}
if(m/31==n)cout<<"YES"<<" "<<m/31<<" "<<m;
else cout<<"NO"<<" "<<m/31<<" "<<m;
system("pause");
return 0;    
}
