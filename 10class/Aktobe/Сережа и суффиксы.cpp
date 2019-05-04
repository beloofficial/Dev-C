#include<iostream>
#include<cstdio>
using namespace std;
long long int c[111111];
int main()
{
long long int n,m,a[111111],b,k=2,ans=0;
cin>>n>>m;
for(int i=1;i<=n;i++)
{cin>>a[i];}
	for(int i=1;i<=m;i++)
	{
		cin>>b;
		for(int j=b;j<=n;j++)
		{
			c[a[j]]=k;
		}
		for(int j=1;j<=n;j++)
		{
			if(c[j]!=k) ans++;
		}
		
		
		cout<<ans<<endl;k++;ans=0;
	}
return 0;
}
