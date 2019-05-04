#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;
string s,k[222];
long long int n,a[11111],sz,z,q=-1,u;
int main()
{

cin>>n;
for(int i=1;i<=n;i++)
{
cin>>a[i];	
}	

	cin>>s;
	sz=s.size();

	for(int i=1;i<=n;i++)
	{
		if(sz%n>=a[i])z=sz/n+1;
		else z=sz/n;
			for(int j=1;j<=z;j++)
			{
				q++;
				if(q==s.size())u++;
				k[a[i]][j]=s[q];	
			}	
			if(u==1)break;
	}
	sort(a+1,a+n+1);
	if(sz%n!=0)
	{
	for(int i=1;i<=sz/n+1;i++)
	{
		for(int j=1;j<=n;j++)
		{
				if(k[a[j]][i]!='*')cout<<k[a[j]][i];
				else break;	
		}
	}
}

else 
{
	
	for(int i=1;i<=sz/n;i++)
	{
		for(int j=1;j<=n;j++)
		{
				if(k[a[j]][i]!='*')cout<<k[a[j]][i];
				else break;	
		}
	}
}

return 0;
}
