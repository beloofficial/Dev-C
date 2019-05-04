#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,a[111111],ans=0,mx=999999,mn=-9999999,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			for(int k=i;k<=j-1;k++)
			{
				if(a[k]<a[k+1])ans++;
				else if(a[k]>a[k+1])ans--;
			}
			if(ans<=1&&j-i+1>sum){
			sum=j-i+1;cout<<i<<" "<<j<<endl;}
			ans=0;
		}
	}
	cout<<sum;
	return 0;
}
