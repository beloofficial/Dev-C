#include<iostream>
#include<set>
#include<cstdio>
using namespace std;
multiset<int> s;
long long int n,a[111111],sum=0,ans=0;
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
	s.insert(a[i]);
}
for(int i=1;i<=n;i++)
{sum++;
	if(a[i]==*s.rbegin())
	{
		ans=ans+sum*a[i];sum=0;s.clear();
		for(int j=i+1;j<=n;j++)
		{
			s.insert(a[j]);
		}
	}
}cout<<ans;
return 0;
}
