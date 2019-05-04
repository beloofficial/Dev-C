#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
using namespace std;
long long int q=0,ans=0,a[11111],b[11111];
int main()
{
	string s,s1;
	cin>>s>>s1;
 if(s.size()==s1.size())
	{
		for(int i=0;i<s.size();i++)
		{
			a[s[i]-64]++;
			b[s1[i]-64]++;
		}
		for(int i=1;i<=s.size();i++)
		{
			if(a[i]!=b[i]){q++;break;}
		}
	}
	else 
	{
		q++;
	}
	if(q==0)cout<<"YES";
	else cout<<"NO";
	return 0;
}
