#include<iostream>
using namespace std;
int main()
{int i,j,m,n,a[111111],b[111111],c[111111],d[11111],k=0,h=0;
cin>>m>>n;
for(i=1;i<=n;i++)
{cin>>a[i]>>b[i];}
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
              if(a[i]!=b[j])k++;   
}                 
if(k==n)cout<<c[i]<<" ";
}

for(j=1;j<=n;j++)
{
for(i=1;i<=n;i++)
{
              if(b[j]!=a[i])h++;   
}                 
if(h==n)cout<<c[i]<<" ";
}
for(i=1;i<=n;i++)
cout<<c[i]<<" "<<d[i]<<" ";    
system("pause");
return 0;    
}
