#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
	long long  int n,s,l,a[1111111];
	cin>>n;
	s=n;
	for(int i=1;i<=n;i++)
	{
	cin>>a[i];
	}
	sort(a+1,a+n+1);
	cout<<a[n/2+1]-a[1];
	return 0;
}
