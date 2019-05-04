#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

typedef long long i64;

const int P = 1000000007;
const int MAXN = 100;

int a[MAXN];
int b[MAXN];
int c[MAXN];
int s[100];

i64 d[MAXN][MAXN * 9 + 1];

i64 solve(int n, int k, int s) {
	memset(d, 0, sizeof(d));
	d[0][0] = 1;
	for (int i = 0; i < n; ++i) {
		for (int j = n >> 1; j >= 0; --j) {
			for (int t = j * k * 9; t >= 0; --t) {
				d[j + 1][t + c[i]] += d[j][t];
				if (d[j + 1][t + c[i]] >= P) {
					d[j + 1][t + c[i]] -= P;
				}
			}
		}
	}
	return d[n >> 1][s];
}

string q[MAXN];

int main() {
freopen("G.in", "r", stdin);
freopen("G.out", "w", stdout);
	int m, k;
	cin >> m >> k;
	int S = 0;
	for (int i = 0; i < m; ++i) {
		cin >> q[i];
		for (int j = 0; j < k; ++j) {
			c[i] += q[i][j] - '0';
		}
		for (int j = 0; j < k >> 1; ++j) {
			a[i] += q[i][j] - '0';
			b[i] += q[i][k - 1 - j] - '0';
		}
		S += c[i];
	}
	i64 result = 0;
	if (m & 1) {
		for (int i = 0; i < m; ++i) {
			int tS = S;
			if (k & 1) {
				if ((S - (c[i] - a[i] - b[i])) & 1) {
					continue;
				}
				tS -= c[i] - a[i] - b[i];
			}
			tS /= 2;

			int t = a[i];
			a[i] = a[m - 1];
			a[m - 1] = t;
			t = b[i];
			b[i] = b[m - 1];
			b[m - 1] = t;
			t = c[i];
			c[i] = c[m - 1];
			c[m - 1] = t;
			
			i64 p = solve(m - 1, k, tS - a[m - 1]);
			result += p;
			if (result >= P) {
				result -= P;
			}
			
			t = a[i];
			a[i] = a[m - 1];
			a[m - 1] = t;
			t = b[i];
			b[i] = b[m - 1];
			b[m - 1] = t;
			t = c[i];
			c[i] = c[m - 1];
			c[m - 1] = t;
		}
	} else if (!(S & 1)) {
		result = solve(m, k, S >> 1);
	}
	for (int i = 0; i < m >> 1; ++i) {
		result = (result * (i + 1) * (i64)(i + 1)) % P;
	}
	cout << result << endl;
	return 0;
}
