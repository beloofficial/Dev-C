#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long 	int c,a,b,d,e,f,g,mn;
	cin>>a>>b>>c;
	mn=min(a,b);
	d=a+b+a+b;
	e=c*2+mn*2;
	f=a+b+c;
	 g=min(d,e);
	 mn=min(f,g);
	 cout<<mn;
	return 0;
} 
