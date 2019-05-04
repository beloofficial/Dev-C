#include<iostream>
#include<cstdio>
using namespace std;
unsigned long long n,a[1111111],sum=0,mn=999999999999,ra,ans=0,k=0,q;

int main()
{
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
for(int i=1;i<=n;i++)
{
	if(a[i]<mn)
	{
		mn=a[i];ra=i;q=i;
	}
	else if(a[i]==mn)
	{
		ra=i;
	}
}
	ans+=n*mn;
	
		ans+=n-ra;
	
	for(int i=1;i<q;i++)
		{
			if(a[i]<=mn){
			k++;}
		}
		if(k==0)ans+=q-1;
	cout<<ans;
return 0;
}
