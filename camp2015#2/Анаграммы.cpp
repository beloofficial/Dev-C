#include<iostream>
#include<string>
using namespace std;
int main()
{int a[11111],b[11111],su=0,q;
string s,ss;
cin>>s>>ss;
q=s.size();
for(int i=0;i<s.size();i++)
{
	a[i]=s[i];
}
for(int j=0;j<ss.size();j++)
{
	b[j]=ss[j];
}
	
	
	sort(b,b+q);
	if(s.size()==ss.size())
	{for(int i=0;i<s.size();i++)
	{
	if(a[i]==b[i])s++;
	}
	if(s==s.size())cout<<"YES";
	else cout<<"NO";
	}
	else cout<<"NO";
return 0;
}
