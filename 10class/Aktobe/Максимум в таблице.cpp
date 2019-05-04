#include<iostream>
#include<algorithm>
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
		d[i][1]=1;
		d[1][i]=1;
	}
	for(i=2;i<=n;i++)
	{
		for(j=2;j<=n;j++)
		{
			d[i][j]=d[i-1][j]+d[i][j-1];
		}
	}
	cout<<d[n][n];
return 0;
}

