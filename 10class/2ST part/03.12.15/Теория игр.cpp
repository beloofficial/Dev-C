#include<iostream>
#include<cstdio>
using namespace std;
long long int n,m,mn=2000,mx=-2000,a[111][111];
int main()
{

int q,w;
cin>>n>>m;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=m;j++)
	{
		cin>>a[i][j];if(a[i][j]<mn)mn=a[i][j];		
	}
	if(mn>mx)mx=mn;
	mn=2000;
}
q=mx;
mn=2000;mx=-2000;
for(int i=1;i<=m;i++)
{
	for(int j=1;j<=n;j++)
	{
		if(a[j][i]>mx)mx=a[j][i];
	}
	if(mx<mn) mn=mx;
	mx=-2000;
}
cout<<q<<" "<<mn;
return 0;
}
