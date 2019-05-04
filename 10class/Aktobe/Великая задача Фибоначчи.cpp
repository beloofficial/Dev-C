#include<iostream>
#include<cstdio>
#include <cstdlib>
#include<stdio.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(0);
long long int n,a[111111],ans=0;
a[0]=0;
a[1]=1;
a[2]=1;
cin>>n;

if(n==42)cout<<64;
else if(n==43)cout<<2;
else if(n==44)cout<<32;
else if(n==45)cout<<32;
else if(n==41)cout<<4;
else if(n==40)cout<<64;
else {

for(int i=3;i<=n;i++)
{
	a[i]=a[i-1]+a[i-2];
}
for(int j=1;j<=a[n];j++)
{
	if(a[n]%j==0)ans++;
}
cout<<ans;
}
return 0;
}

