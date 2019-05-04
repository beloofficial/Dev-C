#include<iostream>
#include<cstdio>
using namespace std;
unsigned long long n,m,a[11111111],q;
int gcd (int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd (b, a % b);
}
int main()
{
cin>>n>>m;
a[0]=0;
a[1]=1;
if(n>m)q=n;
else q=m;
for(int i=2;i<=q;i++)
{
	a[i]=a[i-1]+a[i-2];
}	
cout<<gcd(a[n],a[m]);
return 0;
}
