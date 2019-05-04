#include<iostream>
#include<cstdio>
using namespace std;
long long int a[1111111];
int main()
{
int n,q;
cin>>n;
a[1]=2;
a[2]=3;
for(int i=3;i<=n;i++)
{
	a[i]=a[i-1]+a[i-2];
}cout<<a[n];
return 0;
}
