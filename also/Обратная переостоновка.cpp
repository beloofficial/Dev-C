#include<iostream>
using namespace std;
int main()
{int i,a[1111],n,c[111];
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
for(i=1;i<=n;i++)    
{c[i]=a[i+1];c[n]=a[1];}
for(i=1;i<=n;i++)
cout<<c[i]<<" ";
system("pause");
return 0;    
}
