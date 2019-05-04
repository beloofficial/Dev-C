#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
string s1,s2,s3,s;
cin>>s1>>s2>>s3;
if(s1.size()>s2.size())s=s1;
else if(s1.size()<s2.size())s=s2;
else 
{
	if(s1.compare(s2)==1)s=s1;
	else s=s2;
}
if(s.size()>s3.size())cout<<s;
else if(s.size()<s3.size())cout<<s3;
else 
{
	if(s.compare(s3)==1)cout<<s;
	else cout<<s3;
}
return 0;
}
