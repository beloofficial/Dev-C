#include<iostream>
using namespace std;
int main()
{int i,n,m,a[111][111],q,j;
cin>>n>>m;
for(i=1;i<=n;i++)
{
      for(j=1;j<=m;j++)
      {
           cin>>a[i][j];                 
      }                 
}
cout<<endl;
for(i=1;i<=n;i++)
{
      for(j=1;j<=m;j++)
      {                if(i==1)a[i][j]=a[i][j]+a[i][j-1];
                       else if(j==1)a[i][j]=a[i][j]+a[i-1][j];
                       else {
           if(a[i-1][j]>a[i][j-1])a[i][j]=a[i][j-1]+a[i][j];
           else a[i][j]=a[i-1][j]+a[i][j]; }   
           cout<<a[i][j]<<" ";            
      }   
      cout<<endl;              
}cout<<endl;
cout<<a[n][m];
system("pause");
return 0;    
}
