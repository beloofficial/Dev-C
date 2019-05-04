#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,a[111111],mx=-999999;
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
for(int i=1;i<=n-2;i++)
{
	if(a[i]+a[i+1]+a[i+2]>mx)mx=a[i]+a[i+1]+a[i+2];
}
if(a[1]+a[n]+a[n-1]>mx)mx=a[1]+a[n]+a[n-1];
if(a[1]+a[2]+a[n]>mx)mx=a[1]+a[2]+a[n];
cout<<mx;
return 0;
}
