#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
unsigned long long n,sq,ans=0,sz;
int main()
{

cin>>n;
//sq=pow(10,n);
//sz=sq-sq/10;
	//cout<<(sq/10+sq-1)*sz/2;
if(n<4) 
{
if(n==1)cout<<45;
else if(n==2)cout<<4905;
else if(n==3)cout<<494550;	
}	
	else if(n>3)
	{
		cout<<494;
		for(int i=1;i<=n-3;i++)
		{
			cout<<9;
		}
		cout<<550;
		for(int i=1;i<=n-3;i++)
		{
			cout<<0;
		}
	}
return 0;
}
