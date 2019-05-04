#include<iostream>
#include<cstdio>
using namespace std;
bool ans[1111];
long long int n,k,m,q=0,a[111][111];
void qwe(int v)
{
	ans[v]=1;
	for(int i=1;i<=n;i++)
	{
		if(a[v][i]==1&&ans[i]!=1)
		{
			q++;
			qwe(i);
		}
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	qwe(k);
	cout<<q;
return 0;
}
