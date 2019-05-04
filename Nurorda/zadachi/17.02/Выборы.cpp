#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
int n,a[111111],sum=0;
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
	sort(a+1,a+n+1);
	for(int i=1;i<=n/2+1;i++)
	{
		sum+=a[i]/2+1;
	}cout<<sum;
return 0;
}
