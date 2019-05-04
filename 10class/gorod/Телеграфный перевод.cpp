#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,sum=0,ans=0;
cin>>n;
while(n>=107)
{
	sum+=100;ans+=7;
	n=n-107;
}
if(n>7)
{
cout<<sum+n-7<<" "<<ans+7;
}
else cout<<sum<<" "<<ans;
return 0;
}
