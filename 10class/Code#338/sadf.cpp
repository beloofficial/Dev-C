#include<iostream>
#include<cstdio>
using namespace std;
unsigned long long a[11111111],l,r,k,q=1,ans,z=0;
int main()
{
	cin>>l>>r>>k;
	a[1]=1;	
	ans=1;
	q=k;
	for(int i=2;i<=r;i++)
	{
		ans=ans*q;
		a[i]=ans;
		if(ans>=l&&ans<=r)z++;
	}
	if(z>0||l==1)
	{
	for(int i=1;i<=r;i++)
	{
		if(a[i]<=r&&a[i]>=l)
		cout<<a[i]<<" ";
		if(a[i]>r)
		break;
	}
}
else cout<<-1;
return 0;
}
