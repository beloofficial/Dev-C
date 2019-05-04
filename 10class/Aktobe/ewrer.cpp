#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,a[11111],k=-1,ans=1;
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
for(int i=1;i<=n-1;i++)
{
	if(a[i]<a[i+1]&&k==0||a[i]<a[i+1]&&k==-1)
	{
		ans++;k=1;
	}
	else if(a[i]>a[i+1]&&k==1||a[i]>a[i+1]&&k==-1)
	{
		ans++;k=
	}
}

return 0;
}
