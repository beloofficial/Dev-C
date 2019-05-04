#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
long long int n,t,m,a[111][111],q=0;
cin>>t;
for(int i=1;i<=t;i++)
{cin>>n>>m;
	for(int j=1;j<=n;j++)
	{
		for(int k=1;k<=m;k++)
		{
			cin>>a[j][k];
		}
	}
		for(int z=1;z<=n-1;z++)
	{
		for(int x=1;x<=m-1;x++)
		{
			if(a[z][x]+a[z][x+1]+a[z+1][x]+a[z+1][x+1]==0||a[z][x]+a[z][x+1]+a[z+1][x]+a[z+1][x+1]==4){
				q++;
			}
		}
	}
	if(q>0)cout<<"NO"<<endl;
	else cout<<"YES"<<endl;q=0;
}
	
return 0;
}
