#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
long long int a=0,n,k,b=0,sz,mx,a1=0,b2=0,p=0;
string s;
cin>>n>>k;
for(int o=1;o<=k;o++)
{

getline(cin,s);
for(int i=0;i<s.size();i++)
{
	if(s[i]==32)a++;
	else break;
}
	for(int i=s.size()-1;i>=0;i--)
{
	if(s[i]==32)b++;
	else break;
}
if(n<s.size())cout<<"Impossible."<<endl;
else 
{
sz=n-s.size();
if(b>a)a1=b-a-1;
else if(b<a)b2=a-b+1;
sz=sz-a1;
sz=sz-b2;
if(a==b)
{
	if(sz%2==1)
	{
		a1+=sz/2;
	b2+=sz/2+1;
	}
	else {
	cout<<"Impossible."<<endl;p++;}
}
if(sz%2==0)	
{
	a1+=sz/2;
	b2+=sz/2;
}
if(sz<0&&p==0)cout<<"Impossible."<<endl;
else
{
	for(int i=1;i<=a1;i++)
	{
		cout<<" ";
	}
	cout<<s;
		for(int i=1;i<=b2;i++)
	{
		cout<<" ";
	}
	cout<<endl;
}
}
a=0,b=0,sz=0,mx=0,a1=0,b2=0,p=0;
}
return 0;
}
