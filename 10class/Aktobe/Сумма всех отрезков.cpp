#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
long long int n,a[111111],mx=999999,sum=0,i;
cin>>n;
for(i=1;i<=n;i++)
{
	cin>>a[i];
}
for(i=1;i<=n;i++)
{
	for(int j=i;j<=n;j++)
	{
		if(a[j]<mx)mx=a[j];
		sum=sum+mx;
	}
	mx=999999;
}
cout<<sum;
return 0;
}
