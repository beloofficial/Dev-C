#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[11111],sum=1,q=1,z=1,t=1;
int main()
{
string s;
cin>>s;
for(int i=1;i<=s.size();i++)
{
	sum*=i;
}	
for(int i=0;i<s.size();i++)
{
	a[t]=s[i]-96;t++;
}t--;
sort(a+1,a+t+1);
for(int i=1;i<=t;i++)
{
	if(a[i]==a[i+1])q++;
	else
	{
		for(int j=1;j<=q;j++)
		{
			z*=j;
		}
		q=1;
		sum/=z;z=1;
	}
}

	cout<<sum;
return 0;
}
