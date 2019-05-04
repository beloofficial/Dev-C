#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
long long int a[111111],z=0,x=0,b[111111],q=0,c[111111],m=0,ans=0,ans1=0,ans2=0,k=0;
int main()
{
char p;
string s;
getline(cin,s);
for(int i=0;i<s.size();i++)
{
	if(s[i]!='+'&&k==0&&s[i]!='-'&&k==0&&s[i]!='*'&&k==0&&s[i]!='/'&&k==0)
	{
		if(s[i]>=48&&s[i]<=57)
		{z++;
			a[z]=s[i]-48;
		}
		else {
			cout<<"ERROR";return 0;
		}
	}	
	else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
	p=s[i];k++;i++;}
	if(k==1)
	{
		if(q==1)
		{m++;
			c[m]=s[i]-48;
		}
		if(s[i]!='='&&q==0)
		{
			if(s[i]>=48&&s[i]<=57)
			{
				x++;
				b[x]=s[i]-48;
			}
			else {
				cout<<"ERROR";return 0;
			}
		}
		else if(s[i]=='='){q++;}
		
	}
}
if(k==1&&q==1&&m!=0&&z!=0&&x!=0)
{
	for(int i=1;i<=z;i++)
	{ans*=10;
			ans+=a[i];
	}	
	for(int i=1;i<=x;i++)
	{ans1*=10;
			ans1+=b[i];
	}
	for(int i=1;i<=m;i++)
	{ans2*=10;
			ans2+=c[i];
	}
	if(p=='+')
	{
		if(ans+ans1==ans2)cout<<"YES";
		else cout<<"NO";
	}
	if(p=='-')
	{
		if(ans-ans1==ans2)cout<<"YES";
		else cout<<"NO";
	}
	if(p=='*')
	{
		if(ans*ans1==ans2)cout<<"YES";
		else cout<<"NO";
	}
	if(p=='/')
	{
		if(ans/ans1==ans2)cout<<"YES";
		else cout<<"NO";
	}
}
else {
	cout<<"ERROR";
}
return 0;
}
