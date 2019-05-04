#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,a[111111],ans=0,mx=0;
string s;
cin>>s;
for(int i=0;i<s.size();i++)
{
	if(s[i]-48==0)ans++;
	else 
	{
		if(ans>mx)mx=ans;ans=0;
	}
}
if(ans>mx)mx=ans;
	cout<<mx;
return 0;
}
