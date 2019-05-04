#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,ans=0,mx=-9999999,a[111111];
	cin>>n;
	for(int i=1;i<=n;i++)	
	{
		cin>>a[i];
		if(a[i]>0)ans++;
		else
		{
			if(ans>mx)mx=ans;ans=0;
		}
	}
	cout<<mx;
	return 0;
}
