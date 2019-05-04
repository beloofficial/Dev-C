#include<iostream>
#include<cstdio>
using namespace std;
long long int n,m,a[555555],b[555555],c[555555],d[555555],mx;
int main()
{
cin>>n>>m;
for(int i=1;i<=n;i++)
{
scanf("%lld",&a[i]);c[a[i]]++;
}
for(int i=1;i<=m;i++)
{
	scanf("%lld",&b[i]);d[b[i]]++;
}
for(int i=1;i<=11000;i++)
{
	if(c[i]>0&&d[i]>0)printf("%lld ",i);
}
	
return 0;
}
