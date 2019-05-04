#include<iostream>
#include<cstdio>
using namespace std;
unsigned long long n,k1,k2,s;
unsigned long long sum=1,sum1=1;

int main()
{
cin>>n>>k1>>k2>>s;
if(k1<k2)
{
for(int i=1;i<=n-k1;i++)
{
	sum=sum*2;
}
//sum=1/sum;
for(int i=1;i<n-k2;i++)
{
	sum1=sum1*2;
}
sum=sum/sum1;
cout<<s/sum<<" "<<s-s/sum;
}

else
{
for(int i=1;i<=n-k2;i++)
{
	sum=sum*2;
}
//sum=1/sum;
for(int i=1;i<n-k1;i++)
{
	sum1=sum1*2;
}
sum=sum/sum1;
cout<<s-s/sum<<" "<<s/sum;
}

return 0;
}
