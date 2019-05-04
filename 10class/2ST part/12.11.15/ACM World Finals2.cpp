#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{int q;
	string s,s1;
	cin>>s>>s1;
	for(int i=0;i<s.size();i++)
	{
		for(int j=i+1;j<s.size();j++)
		{
			if(s[i]>s[j])
			{
				int x=s[i];s[i]=s[j];s[j]=x;
			}
		}
	}	
	for(int i=0;i<s1.size();i++)
	{
		for(int j=i+1;j<s1.size();j++)
		{
			if(s1[i]>s1[j])
			{
				int x=s1[i];s1[i]=s1[j];s1[j]=x;
			}
		}
	}
	if(s.size()==s1.size())
	{
		for(int i=0;i<s.size();i++)
		{
		if(s[i]!=s1[i])q++;
		}
	}
	else 
	{
		q++;
	}
	if(q==0)cout<<"YES";
	else cout<<"NO";
	return 0;
}
