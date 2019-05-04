#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double n,a[111111],b[111111],q;
	double ans=0,mx=-999999;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	for(int i=1;i<=n;i++)
	{
			ans=a[i]*b[i]/100;
			if(ans>mx){mx=ans; q=i;}
	}
	cout<<q;
	return 0;
}
