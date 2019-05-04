#include<iostream>
using namespace std;
int main()
{
	long long  int n,a[1111],sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n-2;i++)
	{
		for(int j=i+1;j<=n-1;j++)
		{
			for(int k=j+1;k<=n;k++)
			{
				sum+=a[i]*a[j]*a[k];
			}
		}
	}
	cout<<sum;
	return 0;
}
