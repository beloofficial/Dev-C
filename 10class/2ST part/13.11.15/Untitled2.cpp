#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,a[111111];
	cin>>n;
	a[0]=0;
	a[1]=1;
	for(int i=2;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	cout<<a[n];
	return 0;
}
