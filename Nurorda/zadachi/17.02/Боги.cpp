#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
long long int n,m,q=0,a[111111];
string s[1111],s1[1111];
int main()
{


cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>s[i];
}
cin>>m;
for(int j=1;j<=m;j++)
{
	cin>>s1[j];
}
//////////////////////////////////////////////////
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=m;j++)
	{
		if(s[i].size()==s1[j].size())
		{
			for(int k=0;k<s[i].size();k++)
			{
				if(s[i][k]!=s1[j][k])q++;
				if(q>1)break;
			}
		}
		if(q==1)a[i]++;
		q=0;
	}
}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
return 0;
}
