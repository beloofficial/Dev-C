#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
long long int a,b,ans=0,c,d,q=0,sum=1,z=0;
string s,s1;
cin>>s>>s1;
for(int i=0;i<s.size();i++)
{
	if(s[i]=='?'){a=9;c=0;}
	else if(s[i]>=48&&s[i]<=57){a=s[i]-48;c=a;}
	else if(s[i]>=97&&s[i]<=103){a=s[i]-94;c=a-3;}
	if(s1[i]=='?'){b=9;d=0;}
	else if(s1[i]>=48&&s1[i]<=57){b=s1[i]-48;d=b;}
	else if(s1[i]>=97&&s1[i]<=103){b=s1[i]-94;d=b-3;}
		for(int j=c;j<=a;j++)
		{
			for(int k=d;k<=b;k++)
			{
				if(j==k){q++;}
			}
		}		
		sum*=q;
		q=0;
		
} 
cout<<sum;
return 0;
}
