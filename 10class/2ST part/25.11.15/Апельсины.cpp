#include<iostream> 
#include<cstdio>
using namespace std;
int gcd (int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd (b, a % b);
}
int main()
{int a,b,lcm;
cin>>a>>b;
cout<<a/gcd(a,b);
return 0;
}
