#include<iostream>
#include<string>
using namespace std;
int main()
{int tosmall,tobig,n,mn=0,mx=0;
string s;
cin>>n>>tosmall>>tobig;
cin>>s;
	for(i=0;i<20;i++)
	{
		if(s[i]>=65&&s[i]<=90)mn=mn+tosmall;
	}
	for(i=0;i<20;i++)
	{
		if(s[i]>=97&&s[i]<=122)mx=mx+tobig;
	}
	if(mn>=mx)cout<<mx;
	else cout<<mn;
return 0;
}
