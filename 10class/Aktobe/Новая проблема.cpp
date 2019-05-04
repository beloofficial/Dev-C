#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 1e9+7
using namespace std;
long long  int n,a[1000000],mx=-INF,mn=INF,q=INF,z=1,x=1,b[1000000],c[1000000],v,p;
int main()
{//freopen("dminmax.in","r",stdin);
//freopen("dminmax.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>mx){mx=a[i];v=0;}
		if(a[i]<mn){mn=a[i];p=0;}
	
	}
	
	
	for(int i=1;i<=n;i++)
	{
		if(a[i]==mx){b[z]=i;z++;}
		if(a[i]==mn){c[x]=i;x++;}
	}
	for(int i=1;i<=z-1;i++)
	{
		for(int j=1;j<=x-1;j++)
		{
			if(abs(b[i]-c[j])<q)q=abs(b[i]-c[j]);
			if(q==1){
			
			cout<<1;return 0;}
		}
	}
	cout<<q;
	return 0;
}
