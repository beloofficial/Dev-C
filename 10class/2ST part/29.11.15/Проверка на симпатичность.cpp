#include<iostream>
#include<cstdio>
using namespace std;
long long int n,m,a[1100][1100],l,ans;
int main()
{
cin>>n>>m;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=m;j++)
	{
		cin>>a[i][j];
	}
}
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=m;j++)
	{
		int q=a[i][j];
		for(int k=1;k<=m;k++)
		{
			if(a[i][k]<q)l++;
		}
		for(int k=1;k<=n;k++)
		{
			if(a[k][j]>q)l++;
		}
		if(l==0)ans++;
		l=0;
	}
}
cout<<ans;
return 0;
}
