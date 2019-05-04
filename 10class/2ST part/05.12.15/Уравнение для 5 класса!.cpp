#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int a,b,c,d;
char e,r;
string s;
int main()
{
    cin>>s;
	if(s[0]=='x')
	{
		if(s[1]=='+')
		{
			cout<<(s[4]-48)-(s[2]-48);
		}
		if(s[1]=='-')
		{
			cout<<(s[4]-48)+(s[2]-48);
		}
	}
	else if(s[2]=='x')
	{
		if(s[1]=='+')
		{
			cout<<(s[4]-48)-(s[0]-48);
		}
		if(s[1]=='-')
		{
			cout<<(s[0]-48)-(s[4]-48);
		}
	}
	else if(s[4]=='x')
	{
		if(s[1]=='+')
		{
			cout<<(s[0]-48)+(s[2]-48);
		}
		if(s[1]=='-')
		{
			cout<<(s[0]-48)-(s[2]-48);
		}
	}
	
    return 0;
}
