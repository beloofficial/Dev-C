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

	for (int i = l; i <= r; ++i) 
	if (i > 0 && a % i == c) {
		res++;
	}

	cout << res;

	return 0;
}
