#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a[111][111],k=0,n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];if(a[i][j]==1)k++;
		}
	}
	cout<<k/2;
}
