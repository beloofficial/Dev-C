#include<iostream>
#include<algorithm>
using namespace std;
int mini(int x ,int y)
{
	if(x==0)return y;
	else if(y==0)return x;
	else return min(x,y);
}
int main()
{
	int n,m,a[111][111],i,j,d[111][111];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			d[i][j]=mini(d[i-1][j],d[i][j-1])+a[i][j];
		}
	}
	cout<<d[n][n];
return 0;
}

