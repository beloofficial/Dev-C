#include<iostream>
using namespace std;
int main()
{int n,a[111][111],j,i,c=0,f=0,g=0,k=0,l,m;
cin>>n;
for( i=1;i<=n;i++)
{for( j=1;j<=n;j++)
{cin>>a[i][j];}}
for( i=1;i<=n;i++){
     for( j=1;j<=n;j++){

if(a[i][j+1]==1)f++;
if(a[i+1][j+1]==1)g++;
if(a[i-1][j+1]==1)k++;

}}
if(c>f)l=c;
else l=f;
if(g>k)m=g;
else m=k;
if(l>m)cout<<l+1<<endl;
else cout<<m+1<<endl;

system("pause");
return 0;   
}
