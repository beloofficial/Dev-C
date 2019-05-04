#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,a[1111],k=0;
cin>>n;	
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
int q=0,sum=0,ans=-1;
while(k!=n)
{
	if(q==0&&k!=n)
	{
		for(int i=1;i<=n;i++)
		{	
			if(a[i]!=-1&&sum>=a[i])
			{
				sum+=1;a[i]=-1;k++;
			}
		}
		q=1;ans++;	
	}
	if(q==1&&k!=n)
	{
		for(int i=n;i>=1;i--)
		{	
			if(a[i]!=-1&&sum>=a[i])
			{
				sum+=1;a[i]=-1;k++;
			}
		}	q=0;ans++;	
	}
}cout<<ans;
return 0;
}
