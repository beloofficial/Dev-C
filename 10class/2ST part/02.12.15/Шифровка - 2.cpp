#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
string s,k[111];
int main()
{
int n,a[11],sz,z,q=-1;
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
				k[a[i]][j]=s[q];	
			}	
	}
	for(int i=1;i<=sz/n+1;i++)
	{
		for(int j=1;j<=n;j++)
		{
				if(k[j][i]!=0)cout<<k[j][i];
				else break;
			
		}
	}
return 0;
}
