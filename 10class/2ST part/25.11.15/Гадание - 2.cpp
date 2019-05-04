#include<iostream>
#include<cstdio>
using namespace std;
int n,result;
int phi (int n) {
	 result = n;
	for (int i=2; i*i<=n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	return result;
}
int main()
{
cin>>n;
phi(n);
cout<<result;
return 0;
}
