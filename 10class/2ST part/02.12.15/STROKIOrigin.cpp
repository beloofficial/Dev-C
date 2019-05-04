#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
long long int a[1111111]={-1},b[1111111]={-1};
int main()
{
long long int k=0,q,z=0,ans=0;
char x;
string s,s1;
cin>>s>>s1;
for(int j=0;j<=s1.size()-1;j++)
{x=s1[s1.size()-1];
	for(int i=s1.size()-1;i>0;i--)
	{
	 	s1[i]=s1[i-1];
	}s1[0]=x;
	for(int k=0;k<s.size()-s1.size()+2;k++)
	{q=k;
		for(int l=0;l<s1.size();l++)
		{
			if(s1[l]==s[q])z++;
			q++;
		}
		
		if(a[k]!=k&&b[k]!=k+s1.size()-1)
		{
		if(z==s1.size()){
		ans++;a[k]=k;b[k]=k+s1.size()-1;
		}
		
		
		}
		z=0;q=0;
	}
	z=0;q=0;
}
cout<<ans;
return 0;
}
