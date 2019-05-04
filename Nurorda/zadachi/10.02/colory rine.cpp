#include<iostream>
using namespace std;
int b[111],c[111];
int main()
{
int i,j,n,ii,a[111][111],k[111],s=0;
cin>>n;
for(i=1;i<=n;i++)
{
   for(j=1;j<=n;j++)
   {
                    cin>>a[i][j];
   }                 
}
for(i=1;i<=n;i++)
{cin>>k[i];}
    
for(i=1;i<=n;i++)
{
   for(j=1;j<=n;j++)
   {
          if(a[i][j]==1){if(b[i]==0||b[i]==k[j]&&c[j]==0||c[j]==k[j])
                         
                         {b[i]=k[j];c[j]=k[j];}
                         else s++;
                         }
   }
}
cout<<s;
system("pause");
return 0;    
}
