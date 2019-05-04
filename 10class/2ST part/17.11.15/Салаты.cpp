#include<iostream>
#include<cstdio>
using namespace std;
long long int n,k,z=1,x=1,c=1,ans;
int main()
{
cin>>n>>k;
for(int i=1;i<=n;i++)
{
	z=z*i;
}
for(int i=k;i<=n;i++)
{
	if(i==n)x=1;
	else 
	{
		for(int j=1;j<=n-i;j++)
		{
			x=x*j;
		}
	}
	if(i==0)
	c=1;
	else
	{
		for(int w=1;w<=i;w++)
		{
			c=c*w;	
		}
	}
	ans+=z/(x*c);
	x=1;c=1;
}	
cout<<ans;
return 0;
}
