#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
long long int tosmall,tobig,n,mn=0,mx=0,i;
string s;
cin>>n>>tosmall>>tobig;
cin>>s;

	for(i=0;i<n;i++)
	{
		if(s[i]>=65&&s[i]<=90)mn=mn+tosmall;
	}
	for(i=0;i<n;i++)
	{
		if(s[i]>=97&&s[i]<=122)mx=mx+tobig;
	}
	if(mn>=mx)cout<<mx;
	else cout<<mn;

return 0;
}
