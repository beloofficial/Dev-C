#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	freopen("E.in","r",stdin);
	freopen("E.out","w",stdout);
long long int n,a[111111],z,x=0,q=0,k;
string s;
cin>>s;
while(s[0]-48!=q)
{
	cout<<"ADD"<<endl;
	q++;
}
q=0;
if(s.size()>1)
{
	cout<<"MUL"<<endl;
	while(s[1]-48!=q)
	{
		q++;cout<<"ADD"<<endl;
	}
}q=0;
if(s.size()>2)
{
	cout<<"MUL"<<endl;
	while(s[2]-48!=q)
	{
		q++;cout<<"ADD"<<endl;
	}
}q=0;
if(s.size()>3)
{
cout<<"MUL"<<endl;
while(s[3]-48!=q)
{
q++;cout<<"ADD"<<endl;	
}	
}
return 0;
}
