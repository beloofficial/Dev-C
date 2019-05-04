#include<iostream>
#include<cstdio>
using namespace std;
long long int e[222222];
int main()
{
long long int n,m;
char a[222222],b,c,d,i,j;
cin>>n>>m;
for(i=1;i<=n;i++)
{
	cin>>a[i];
}
	for(j=1;j<=m;j++)
	{
		cin>>b>>c;
		d=c;
		for(i=1;i<=n;i++)
		{
			if(a[i]==c){a[i]=b;e[i]=1;}
		
			if(a[i]==b&&e[i]!=1)a[i]=d;
			e[i]=0;
		}
	
			
		
	}
	for(i=1;i<=n;i++)
	cout<<a[i];
return 0;
}
