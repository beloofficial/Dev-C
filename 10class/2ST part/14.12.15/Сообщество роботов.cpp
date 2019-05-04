#include<iostream>
#include<cstdio>
using namespace std;
long long int k,n,a[11111],z=0,d=0,p=0,b;
int main()
{
cin>>k>>n;
a[4]=k;a[3]=0;
for(int i=5;i<=n+5;i++)
{int x=a[i-1];
	while(z!=1)
	{
		if(x/3==0){
			break;
		}
		if(x/5*9>x/3*5){a[i]=a[i]+9;x=x-5;}
		else {a[i]=a[i]+5;x=x-3;}
	}
	a[i]=a[i]+a[i-1]-a[i-3];
}
	cout<<":"<<a[n+3];
return 0;
}
