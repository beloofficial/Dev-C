#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,k,sum=1;
cin>>n>>k;
for(int i=1;i<=n;i++)
{
	sum*=i;
}
if(k>n)
cout<<0;
else if(k==n)cout<<sum;
else
{

int q=(n-k)*(k+1);
cout<<q*sum;
}
return 0;
}
