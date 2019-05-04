#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <cstdio>

using namespace std;

typedef long long i64;

const int P = 1000000007;
const int MAXN = 100;

string s[MAXN];

int main() {
freopen("G.in", "r", stdin);
freopen("G.out", "w", stdout);

	int m, k;
	cin >> m >> k;
	map<string, int> q;
	for (int i = 0; i < m; ++i) {
		cin >> s[i];
	}
	sort(s, s + m);
	i64 result = 0;
	do {
		string t = "";
		int a = 0, b = 0;
		for (int i = 0; i < m; ++i) {
			t += s[i];
		}
		for (int j = 0; j < (int)t.length() >> 1; ++j) {
			a += t[j] - '0';
			b += t[t.length() - 1 - j] - '0';
		}
		if (a == b) {
			++result;
		}
	} while (next_permutation(s, s + m));
	for (int i = 0; i < m; ++i) {
		++q[s[i]];
		result = (result * q[s[i]]) % P;
	}
	cout << result << endl;

	return 0;
}
