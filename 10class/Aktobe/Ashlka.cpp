#include<iostream>
using namespace std;
int main()
{
	int n,m,a,b,ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			for(int l=1;l<=1;l++)
			{
				cin>>a>>b;
				if(a==1||b==1)ans++;	
			}
		}
	}
	cout<<ans;
return 0;
}
