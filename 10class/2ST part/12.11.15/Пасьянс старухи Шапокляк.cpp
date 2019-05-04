#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,m,ans=0;
	cin>>n>>m;
	for(int i=n;i<=m;i++)
	{
		int q=i;
		while(q!=2)
		{
			if(q%2==0)q/=2;
			else q=q*3+1;
			ans++;
		}
	}
	cout<<ans;
return 0;
}
