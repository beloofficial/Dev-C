#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
int a[70],b[70],ans;
int main()
{
	string s,s1;
	cin>>s>>s1;
	if(s.size()==s1.size())
	{
		for(int i=0;i<s.size();i++)
		{
		a[i]=toupper(s[i]);
		b[i]=toupper(s1[i]);
		}
		sort(a,a+s.size());
		sort(b,b+s1.size());
		for(int i=0;i<s.size();i++)
		{
			if(a[i]!=b[i])ans++;
		}
	
	if(ans==0)cout<<"Yes";
	else cout<<"No";
	}
	else cout<<"No";
	return 0;
}
