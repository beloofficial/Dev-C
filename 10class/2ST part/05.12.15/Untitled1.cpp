#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
int k=0;
string s1,s2;
cin>>s1>>s2;
for(int i=0;i<s2.size();i++)
{
	if(s1[k]==s2[i])k++;
}
	if(k==s1.size())
	{
		cout<<"YES";
	}
	else cout<<"NO";
return 0;
}
