#include<iostream>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
int i,j,n,m,k=0;
char a[111][111];
cin>>n>>m;
for(i=1;i<=n;i++)
{
                 for(j=1;j<=m;j++)
                 {
                   cin>>a[i][j];               
                 }
}
//-------------------------------------------------------                 
  for(i=1;i<=n;i++)
{
                 for(j=1;j<=m;j++)
                 {
                   if(a[i][j]=='.'&&a[i][j+1]!='*'&&a[i][j-1]!='*'&&a[i-1][j]!='*'&&a[i+1][j]!='*') k++;              
                 }               
}
    cout<<k;
//system("pause");    
return 0;
}
