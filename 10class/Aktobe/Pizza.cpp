#include<iostream>
#include<cstdio>
using namespace std;
long long int i,n,j,l,a[111111];
int main()
{
cin>>n;
a[1]=1;
a[2]=2;
a[3]=4;
for(i=4;i<=n;i++)
	{a[i]=a[i-1]+a[i-2]+a[i-3];}
	cout<<a[n];
return 0;
}
