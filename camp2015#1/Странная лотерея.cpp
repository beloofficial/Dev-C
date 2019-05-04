#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{//freopen("input.txt","r",stdin);
//8freopen("output.txt","w",stdout);
int i,q=10,w=10,z;
string s;
cin>>s;
	for(i=0;i<s.size();i++)
	{
		if(s[i]-48<q){q=s[i]-48;z=i;}
		else q=q;
	
	}
	for(i=0;i<s.size();i++)
	{
		if(s[i]-48<w&&z!=i)w=s[i]-48;
		else w=w;
	}
	for(i=0;i<s.size();i++)
	{
		if(s[i]-48!=q&&s[i]-48!=w)cout<<s[i]-48;
	}
return 0;
}
