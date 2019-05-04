#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int a[11111111],b,c,k;
int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
string s;
cin>>s;
for(int i=0;i<s.size();i++)
{
a[i]=s[i]-48;
}
for(int i=0;i<s.size()-1;i++)
{
	if(a[i]<a[i+1]&&k<2||a[i]<a[i+2]&&k<2){k++;}
	else cout<<a[i];
}
if(k>=2)cout<<a[s.size()-1];
	return 0;
}
