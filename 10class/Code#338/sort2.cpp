#include<iostream>
#include<algorithm>
using namespace std;
int gcd (int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd (b, a % b);
}
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<gcd(n,m);
return 0;
}
