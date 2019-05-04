#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
long long  int n,z=0;
	string s;
int main()
{
	
	cin>>s;
	n=s.size();
	n=n-1;
	for(int i=0;i<s.size()/2;i++)
	{
		if(s[i]!=s[n])
		{
			 z=n;break;
		}
		n--;
	}
	if(z==0)
	{
	n=s.size();
	n=n-2;
		for(int i=0;i<s.size()/2;i++)
		{
		if(s[i]!=s[n])
		{
			 z=n;break;
		}
		n--;
		}
		
		if(z==0)
		{
			cout<<"NO SOLUTION";
		}
		else 
		{
			for(int i=0;i<s.size()-1;i++)
			{
				cout<<s[i];
			}
		}
	}
	else
	{
			for(int i=0;i<s.size();i++)
			{
				cout<<s[i];
			}
	}
	
	return 0;
}
