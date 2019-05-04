#include<iostream>
#include<cstdio>
using namespace std;
unsigned long long int n;
int main()
{
cin>>n;
if(n%2==1)cout<<0;
else 
{
	n=n/2;
	n=n-1;
	cout<<n/2;
}
	
return 0;
}
