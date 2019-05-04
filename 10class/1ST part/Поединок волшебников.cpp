#include<iostream>
#include<cstdio>
using namespace std;
int main()
{int e;
double d,a,b,c;
cin>>a>>b>>c;
	d=a/(b+c);
	e=max(b,c);
	d=d*e;
	if(a==b||a==c)
	cout<<a/(b+c);
	else cout<<d;
return 0;
}
