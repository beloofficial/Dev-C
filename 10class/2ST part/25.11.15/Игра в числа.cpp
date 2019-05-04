#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
long long int n,a[111111],s=1,e,fi=0,se=0,k=0;
cin>>n;e=n;
for(int i=1;i<=n;i++)
{cin>>a[i];}
for(int i=1;i<=n;i++)
{
	if(a[s]>=a[e])
	{
		if(k==0)
		{
			fi+=a[s];s++;
			k=1;
		}
		else if(k==1) 
		{
			se+=a[s];s++;
			k=0;
		}
	}
	else 
	{
		if(k==0)
		{
			fi+=a[e];e--;
			k=1;
		}
		else if(k==1) 
		{
			se+=a[e];e--;
			k=0;
		}
	}
}
cout<<fi<<":"<<se;
return 0;
}
