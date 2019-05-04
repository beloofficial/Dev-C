#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,ans=0;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			ans+=i;
			ans+=j;
		}
	}
	cout<<ans;
	return 0;
}
