#include<iostream>
using namespace std;
int main()
{
	int n,a[11111],sum=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	cin>>a[i];
}
	for(int i=1;i<=n-1;i++)
	{
		if(a[i]>a[i+1]&&a[i]!=-1){a[i+1]=-1;}
		else sum++;
	}
	cout<<sum;
return 0;
}
