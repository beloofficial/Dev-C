#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

long long n, s, f, i, j, pos, mn, k, a[1001][1001], ans[1001], way[1001], d[1001];
bool was[1001];

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> n >> s >> f;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			cin >> a[i][j];
	for (i = 1; i <= n; i++)
		d[i] = 1 << 30;
	d[s] = 0;
	for (j = 1; j <= n; j++) {
		mn = 1 << 30;
		for (i = 1; i <= n; i++)
			if (d[i] < mn && !was[i]) {
				mn = d[i];
				pos = i;
			}
		was[pos] = true;
		for (i = 1; i <= n; i++)
			if (a[pos][i] > 0 && d[pos] + a[pos][i] < d[i]) {
				d[i] = d[pos] + a[pos][i];
				way[i] = pos;
			}
	}
	if (d[f] == (1 << 30)) { cout << -1; exit(0); }
		else
	while (f != 0) {
			k++;
			ans[k] = f;
			f = way[f];
		}
 	for (i = k; i >= 1; i--)
 		cout << ans[i] << ' ';
}

