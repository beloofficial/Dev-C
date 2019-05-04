#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,w,d,P,sum=0;
cin>>n>>w>>d>>P;
	for(int i=1;i<=n-1;i++)
	{
		sum=sum+i*w;
	}
	for(int j=1;j<=n-1;j++)
	{
		if(sum-j*w+(j*(w-d))==P)
		{
			cout<<j;return 0;
		}
	}
	cout<<n;
return 0;
}
