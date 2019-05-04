#include<iostream>
using namespace std;
int main()
{int i,n,a[11111],b[11111];
cin>>n;
for(i=1;i<=n;i++)
{a[1]=2;a[2]=3;a[3]=4;a[4]=7;b[1]=1;b[2]=5;b[3]=6;b[4]=8;a[i]=b[i-1]+b[i-3];a[i]=a[i];b[i]=b[i];}
for(i=1;i<=n;i++)
cout<<a[i]<<" "<<b[i];
system("pause");
return 0;    
}
