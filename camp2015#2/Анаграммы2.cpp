#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int a[111111],b[111111],i,j,k=0;
string s,ss;
cin>>s>>ss;
for(i=0;i<s.size();i++)
{
	a[i]=s[i]-48;
}
for(j=0;j<ss.size();j++)
{
	b[j]=ss[j]-48;
}
sort(a,a+s.size());
sort(b,b+ss.size());
for(i=0;i<s.size();i++)
{
	if(a[i]==b[i])k++;
}
if(s.size()==ss.size())
{
if(k==s.size())cout<<"YES";
else cout<<"NO";		
}
else cout<<"NO";
return 0;
}
