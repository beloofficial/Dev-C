#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int a1,b1,c1,a2,b2,c2,a3=0,b3,c3,a4=0,b4=0,c4=0,k=0,l=0,m=0,ans=0;
cin>>a1>>b1>>c1>>a2>>b2>>c2;
a4=a1-a2;
b4=b1-b2;
c4=c1-c2;
///////////////////////////////////////////////////////////
if(a4%2==0&&a4>0)
{
	a3+=a4/2;k++;
}
	else if(a4%2==1&&a4>0)
	{
		if(a1%2!=0)
		{
			ans++;a1-=1;
		}
		a3+=a1/2;
	}
/////////////////////////////////////////////
if(b4%2==0&&b4>0)
{
	a3+=b4/2;l++;
}
	else if(b4%2==1&&b4>0)
	{
		if(b1%2!=0)
		{
			ans++;b1-=1;
		}
		a3+=b1/2;
	}
//////////////////////////////////////////////////////
if(c4%2==0&&c4>0)
{
	a3+=c4/2;m++;
}
	else if(a4%2==1&&a4>0)
	{
		if(c1%2!=0)
		{
			ans++;c1-=1;
		}
		a3+=c1/2;
	}	
////////////////////////////////////////////////////////////////
if(k==0)ans+=a2;
if(l==0)ans+=b2;
if(m==0)ans+=c2;
if(ans==a2+b2+c2)cout<<"Yes";
else cout<<"No";
return 0;
}
