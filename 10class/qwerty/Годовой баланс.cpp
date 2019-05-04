#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
long long int a[1111],b[1111],sz=0,sz1=0,q=0,q1=0;
string s,s1;
cin>>s>>s1;
for(int i=0;i<s.size();i++)
{
	if(s[i]!='-')
	{
		sz++;
		a[sz]=s[i]-48;
	}
}
for(int i=0;i<s1.size();i++)
{
	if(s1[i]!='-')
	{
		sz1++;
		b[sz1]=s1[i]-48;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if(s[0]=='-')
{
for(int i=1;i<=sz-1;i++)
{
	for(int j=i+1;j<=sz;j++)
	{
		if(i!=1||i==1&&a[j]!=0)
		{
			if(a[i]>a[j])swap(a[j],a[i]);
			
		}
	}
}	
}
else 
{
for(int i=1;i<=sz-1;i++)
{
	for(int j=i+1;j<=sz;j++)
	{
		if(i!=1||i==1&&a[j]!=0)
		{
			if(a[i]<a[j])swap(a[j],a[i]);
			
		}
	}
}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if(s1[0]=='-')
{
for(int i=1;i<=sz1-1;i++)
{
	for(int j=i+1;j<=sz1;j++)
	{
		if(i!=1||i==1&&b[j]!=0)
		{
			if(b[i]<b[j])swap(b[i],b[j]);
			
		}
	}
}	
}
else 
{
for(int i=1;i<=sz1-1;i++)
{
	for(int j=i+1;j<=sz1;j++)
	{
		if(i!=1||i==1&&b[j]!=0)
		{
			if(b[i]>b[j])swap(b[j],b[i]);
		}
	}
}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	for(int i=1;i<=sz;i++)
		{
		q*=10;
		q=q+a[i];
		}
		if(s[0]=='-')q=q*-1;
for(int i=1;i<=sz1;i++)
		{
			q1*=10;
			q1=q1+b[i];
		}
	if(s1[0]=='-')cout<<q+q1;
	else cout<<q-q1;
	
return 0;
}
