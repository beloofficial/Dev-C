#include<iostream>
#include<cstdio>
#include<set>
#include<algorithm>
using namespace std;
long long int n,a[1111111],z,x,c,mn,mn1,mx,mx2,mx3;
int main()
{
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	mn=a[1];
	mn1=a[2];
	mx=a[n];
	mx2=a[n-1];
	mx3=a[n-2];
	if(mn+mx+mx2>mx+mx2+mx3)cout<<mn<<" "<<mx<<" "<<mx2;
	else cout<<mx<<" "<<mx2<<" "<<mx3;
	return 0;
}
