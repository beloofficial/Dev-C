#include<iostream>
#include<cstdio>
using namespace std;
long long int n,a[1111111],ans=1;
int main()
{
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
	for(int i=1;i<=n-1;i++)
	{
		if(a[i]<=a[i+1])ans++;
		
	}
	cout<<ans;
return 0;
}
