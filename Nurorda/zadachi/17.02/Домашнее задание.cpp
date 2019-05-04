#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
long long int n,a[111111],mx=-99999,mxx=0,mnn=0,mn=999999,sum=0,ans=1;
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
	if(a[i]>0)sum+=a[i];
	if(a[i]>mx)
	{
		mx=a[i];mxx=i;
	}
	if(a[i]<mn)
	{
		mn=a[i];mnn=i;
	}
}
cout<<sum<<" ";
if(mnn!=0&&mxx!=0&&abs(mxx-mnn)>1)
{
	if(mnn<mxx)
	{
		for(int i=mnn+1;i<mxx;i++)
		{
			ans*=a[i];
		}
	}
	else 
	{
		for(int i=mxx+1;i<mnn;i++)
		{
			ans*=a[i];
		}
	}
	cout<<ans;
}
else cout<<0;
return 0;
}
