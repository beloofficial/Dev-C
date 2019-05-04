#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
long long int x,m,l,v,a[111],sq=0,k=0,ans,sum=0;
cin>>x>>m>>l>>v;int p=x;
for(int i=1;i<=l;i++)
{	x=p;
	x=x*sq;
	for(int j=9;j>=0;j--)
	{
		if((x*j)%m==v||x*j<m)
		{
			k++;ans=j;break;
		}
	}
	if(k==0)
	{
		cout<<"NO SOLUTION";return 0;
	}
	else {
	a[i]=ans;sum+=ans;}
	k=0;sq++;ans=0;
}
//if(sum%m==v)
{
	for(int i=1;i<=l;i++)
	{
		cout<<a[i];
	}
}
//else
{
//	cout<<"NO SOLUTION"; 
}
return 0;
}
