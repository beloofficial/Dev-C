#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
string s,s1;
cin>>s>>s1;
if(s.compare(s1)==0)cout<<0;
else
{
for(int i=0;i<s.size()-1;i++)
{
	char q=s[0];
	for(int j=0;j<s.size()-1;j++)
	{
		s[j]=s[j+1];
	}
	s[s.size()-1]=q;
	if(s.compare(s1)==0)
	{
		cout<<s.size()-1-i;return 0;
	}
}
cout<<-1;
}
return 0;
}
