#include<iostream>
#include<cstdio>
using namespace std;
int main()
{//freopen("1.in","r",stdin);
//freopen("1.out","w",stdout);
long long int n,a[111111],q,mx=0,mn,qq;
cin>>n;  
//-------------------------------------------------------------------
for(int i=1;i<=n*2;i++)
{cin>>a[i];}
mn=n;
mx=n;
int mxx=n;
int mnn=n;
q=n*2;
qq=n*2-1;
sort(a+3,a+n*2+1);
for(int i=1;i<=n*2;i++)
cout<<a[i]<<" ";
system("pause");
return 0;
}
