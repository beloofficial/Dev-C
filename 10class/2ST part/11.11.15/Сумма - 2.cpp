#include<iostream>
#include<cstdio>
#include <cstdlib>
#include<stdio.h>
using namespace std;
int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,ans=0;
cin>>n;
for(int i=1;i<=n/4+1;i++)
{
	for(int j=i;j<=n-i;j++)
	{
		for(int k=j;k<=n-j-i;k++)
		{int l=n-i-j-k;
		if(l>=k)
		{
						if(i+j+k+l==n)ans++;
				else	if(i+j+k+l>n)break;
			}
		}
	}
}
	cout<<ans;
return 0;
}

