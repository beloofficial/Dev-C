#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int i,n,a,b,c,d,e,su=0,f,g;
cin>>n;
for(i=1;i<=i+1;i++)
{	
g=i/1000000;
f=i/100000%10;
a=i/10000%10;
b=i/1000%10;
c=i/100%10;
d=i/10%10;
e=i%10;
	if(i<10)su++;
	else if(i>9&&i<100&&d!=e)su++;
	else if(i>99&&i<1000&&e!=d&&e!=c&&d!=c)su++;
	else if(i>999&&i<10000&&e!=d&&e!=c&&d!=c&&e!=b&&d!=b&&c!=b)su++;
	else if(i>9999&&i<100000&&e!=d&&e!=c&&d!=c&&e!=b&&d!=b&&c!=b&&e!=a&&d!=a&&c!=a&&b!=a)su++;
	else if(i>99999&&i<1000000&&e!=d&&e!=c&&d!=c&&e!=b&&d!=b&&c!=b&&e!=a&&d!=a&&c!=a&&b!=a&&f!=a&&f!=b&&f!=c&&f!=d&&f!=e)su++;
	else if(i>999999&&i<10000000&&e!=d&&e!=c&&d!=c&&e!=b&&d!=b&&c!=b&&e!=a&&d!=a&&c!=a&&b!=a&&f!=a&&f!=b&&f!=c&&f!=d&&f!=e&&g!=f&&g!=a&&g!=b&&g!=c&&g!=d&&g!=e)su++;
	if(su==n){cout<<i;break;}
}
return 0;
}
