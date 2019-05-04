#include <algorithm>
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <queue>
#include <cstdlib>
#include <ctime>
#define ll long long
#define pb push_back

using namespace std;

const int maxn = (int)(2e5);

ll a, c, l, r, res;

int main() {
	freopen("D.in", "r", stdin);
	freopen("D.out", "w", stdout);
	cin >> a >> c >> l >> r;
	
	if (a == c) {
		if (c < l) {
			if (l != 0) l--;
			cout << r - l << endl;
			return 0;
		} else if (c < r) {
			cout << r - c << endl;
			return 0;
		} else {
			cout << 0 << endl;
			return 0;
		}
	}

	if (a < c) {
		cout << 0 << endl;
		return 0;
	}

	a -= c;

	for (ll i = 1; i * i <= a; ++i) 
		if (a % i == 0) {
			if (l <= i && i <= r && i > c) 
				res++;
			ll d = a / i;
			if (d != i && l <= d && d <= r && d > c)
				res++;
		}

	cout << res << endl;

	return 0;
}
