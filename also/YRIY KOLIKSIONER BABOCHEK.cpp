#include<iostream>
using namespace std;
int main()
{int i,n,k,a[111],b,c[111],d;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
cin>>b;
for(k=1;k<=b;k++)
{cin>>c[k];}
for(i=1;i<=n;i++)
{
if(a[1+1]==c[1+1])cout<<"YES";
else cout<<"NO";
}

system("pause");
return 0    ;
}
