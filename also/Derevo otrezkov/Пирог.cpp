#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
long long int t,n,R,r,sum=0,a[22],i;
cin>>t;
for(i=1;i<=t;i++)
{
cin>>n>>R;
	for(int j=1;j<=n;j++)
	{
	cin>>r;
		if(r<=R)sum++;
	}	
	if(sum>0)
	a[i]=1;
	else a[i]=2;
	sum=0;
}
	for(i=1;i<=t;i++)
	cout<<a[i]<<endl;
return 0;
}
