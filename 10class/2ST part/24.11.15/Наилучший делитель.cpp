#include<iostream>
#include<cstdio>
#include<cmath>
long long int n,a[1111111],z=1,x,mx=-99999999,q,sum,k=0;
using namespace std;
int main()
{

cin>>n;
for(int i=1;i<=sqrt(n);i++)
{
	if(n%i==0)
	{
		a[z]=i;
		a[z+1]=n/i;
		z=z+2;
	}
}
z=z-1;
for(int i=1;i<=z;i++)
{
	sum=a[i];
x=sum;
	while(sum!=0)
	{
		k+=sum%10;
		sum/=10;
	}
	if(k>mx)
	{
		q=x;
	mx=k;
	
	}
	else if(k==mx)
	{
		if(x<q)q=x;
	}
	k=0;
}
cout<<q;
return 0;
}
