#include<iostream>
#include<cstdio>
using namespace std;
int n,a[1111111],b[1111111],ans;
int main()
{
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]>=a[i+1]&&a[i]<=b[i+1]||b[i]>=a[i+1]&&b[i]<=b[i+1]){ans++;i+=2;}
	}
	if(n%2==0)
	cout<<ans;
	else cout<<ans+1;
	return 0;
}
