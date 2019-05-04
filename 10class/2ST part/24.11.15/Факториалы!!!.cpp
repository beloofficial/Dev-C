#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
long long int n,k,x=1,sum=1,f;
string s;
cin>>n;
cin>>s;
k=s.size();
if(n>k)
{

if(n%k!=0)
{f=n%k;
	while(n-x*k!=f)
	{
		sum*=n-x*k;
		++x;
	}
	sum=sum*n;
}
else 
{
	while(n-x*k!=k)
	{
		sum*=n-x*k;
		++x;
	}sum*=n-x*k;
		++x;
	sum=sum*n;
}
cout<<sum;
}
else cout<<n;
return 0;
}
