#include<iostream>
#include<cstdio>
using namespace std;
long long int n,n2,sum=0,ans=0,q=0,nab=0,z=0;
int main()
{

cin>>n;
n2=n*n;
for(int i=1;i<=n-1;i++)
{
	sum=sum+i;ans=ans+sum;
}	
	ans+=n2;
////////////////////////////////////////////////////////////////
for(int i=3;i<=n-1;i++)
{
	if(i%2==1)z++;
	q=q+(n-i)*z;
}
cout<<ans+q<<" ";
return 0;
}
