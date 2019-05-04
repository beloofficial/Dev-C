/*
THIS IS NOT A CORRECT SOLUTION. ACTUALLY IT'S TL. IT IS ONLY TO GENERATE ANSWERS
FOR PRELIMINARY TESTS
*/

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespace std;

long long lcm(long long a, long long b) {
	return a / __gcd(a, b) * b;
}

int n, a[111];

int main() {
freopen("C.in", "r", stdin);
freopen("C.out", "w", stdout);

	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
	 	scanf("%d", &a[i]);
	}

	long long res = 0;
	for (int mask = 0; mask < (1<<n); ++mask) {
		long long x = 1, y = 1;
		for (int i = 0; i < n; ++i) {
			if (mask&(1<<i))
				x = lcm(x, a[i]);
			else
				y = lcm(y, a[i]);
		}
		res += (x == y);
	}
	cout << res << endl;
	return 0;
}