#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
long long int q=0,ans=0,n,sz=0,m=0,p=0;
string s;
char s1[11111];
cin>>s;
for(int i=0;i<s.size();i++)
{
	m=m*10;
	m+=s[i]-48;
	
	
}
for(int i=1;i<=m;i++)
{
	int q=i;
	if(i<10)n=1;
	else if(i>9&&i<100)n=10;
	else if(i>99&&i<1000)n=100;
	else if(i>999&&i<10000)n=1000;
	else if(i>9999)n=10000;
	while(n!=0)
	{
		s1[sz]=q/n+48;
		q=q%n;
	
		n=n/10;
		if(s1[sz]==s[p])
		{
			ans++;p++;
		}
		else {
			ans=0;p=0;
		}
		if(ans==s.size())
		{
			cout<<sz-ans+2;return 0;
		}
		sz++;	
	}
}sz--;
return 0;
}
