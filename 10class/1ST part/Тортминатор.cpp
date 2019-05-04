#include<iostream>
using namespace std;
int main()
{
int m,n,i,j,k=0,sum=0,q=0,w=0;
char r[1111][1111];
   cin>>n>>m;
   for(i=1;i<=n;i++)
   {
          for(j=1;j<=m;j++)
          {
                           cin>>r[i][j];    
          }                 
   } 
///////////////////////////////////////////////////
for(j=1;j<=m;j++)
{
     for(i=1;i<=n;i++)
   {
          if(r[i][j]=='.')  k++;              
   }
   if(k==n){sum=sum+k;q++;}
   k=0;
} 
//////////////////////////////////////////////////
for(j=1;j<=n;j++)
{
     for(i=1;i<=m;i++)
   {
          if(r[j][i]=='.')  k++;              
   }
   if(k==m){sum=sum+k;w++;}
   k=0;
} 
cout<<sum-q*w;
system("pause");
return 0;    
}
