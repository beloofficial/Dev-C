#include<iostream>
#include<cstdio>
using namespace std;
int k=0;
int n,m,a[111][111];
void vp(int x,int y)
{
		if(x==n&&y==m)k++;
		if(x+a[x][y]<=n)return vp(x+a[x][y],y);
		if(y+a[x][y]<=m)return vp(x,y+a[x][y]);
		
		
}
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
		vp(1,1);
cout<<k;
return 0;
}
