#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int a[111],b[111],c[111],d[111],z=1,ans;
int main()
{

string s,s1,s2;
cin>>s>>s1>>s2;
for(int i=0;i<s.size();i++)
{
	a[s[i]-48]++;
}
for(int i=0;i<s1.size();i++)
{
	b[s1[i]-48]++;
}
for(int i=0;i<s2.size();i++)
{
	c[s2[i]-48]++;
}
for(int i=0;i<10;i++)
{
	if(a[i]!=0&&b[i]!=0&&c[i]!=0){
	ans++;d[z]=i;z++;}	
}
z--;
cout<<ans<<endl;
for(int i=1;i<=z;i++)
{
	cout<<d[i]<<" ";
}
return 0;
}
