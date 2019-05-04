#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string s,s1,s2;
long long int k,q=0,w,ans=-2,sz,x;
int main()
{


cin>>s>>k;
if(k==-1||k==1)
cout<<s;
else 
if(k>0)
{	
if(k%2==0)
{
	for(int i=1;i<=k/2;i++)
	{
		cout<<s<<s;
	}
}
else {
	for(int i=1;i<=k;i++)
	{
		cout<<s;
	}
}
}
else 
{
 x=k*-1;
 sz=s.size()/x;
	for(int i=0;i<sz;i++)
	{
		s1[i]=s[i];
	}
	if(s.size()%x!=0)
	{
		cout<<"NO SOLUTION";return 0;
	}
		for(int i=0;i<s.size();i++)
		{
			for(int j=0;j<sz;j++)
			{
				if(s[i]!=s1[j]){
					cout<<"NO SOLUTION";return 0;
				}
				i++;
			}i--;
		}
	for(int i=0;i<sz;i++)
	{
		cout<<s1[i];
	}
}

return 0;
}
