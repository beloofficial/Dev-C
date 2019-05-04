/*
Task: rangequery
Author: Azizkhan Almakhan
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std; 

const int mod = int(1e9 + 7);
int n, m, c[111111];
long long a[666666], b[666666];

void init(int u, int l, int r) {
	if (r - l == 1) {
		a[u] = 0, b[u] = c[l];
		return;
	}
	a[u] = 1, b[u] = 0;
	int m = (l + r + 1) / 2;
	
	init(u * 2, l, m);
	init(u * 2 + 1, m, r);
}

void push(int u) {
	if (a[u] != 1) {
		(a[u * 2] *= a[u]) %= mod;
		(a[u * 2 + 1] *= a[u]) %= mod;
		(b[u * 2] *= a[u]) %= mod;
		(b[u * 2 + 1] *= a[u]) %= mod;
		a[u] = 1;
	}
	if (b[u] != 0) {
		(b[u * 2] += b[u]) %= mod;
		(b[u * 2 + 1] += b[u]) %= mod;
		b[u] = 0;
	}
}

int get(int u, int l, int r, int p) {
	if (r - l == 1) {
		return b[u];
	}
	int m = (l + r + 1) / 2, res;
	if (p < m)
		res = get(u * 2, l, m, p);
	else
		res = get(u * 2 + 1, m, r, p);
	
	res = (1LL * res * a[u] + b[u]) % mod;

	return res;		
}

void add(int u, int l, int r, int x, int y, int d) {

	if (y <= l || r <= x) return;
	if (x <= l && r <= y) {
		(b[u] += d) %= mod;
		return;	
	}
	push(u);
	int m = (l + r + 1) / 2;
	add(u * 2, l, m, x, y, d);
	add(u * 2 + 1, m, r, x, y, d);
}

void mult(int u, int l, int r, int x, int y, int d) {

	if (y <= l || r <= x) return;
	if (x <= l && r <= y) {
		(a[u] *= d) %= mod;
		(b[u] *= d) %= mod;
		return;	
	}
	push(u);
	int m = (l + r + 1) / 2;
	mult(u * 2, l, m, x, y, d);
	mult(u * 2 + 1, m, r, x, y, d);
}

int main() {
freopen("F.in", "r", stdin);
freopen("F.out", "w", stdout);

	scanf("%d", &n);		
	for (int i = 0; i < n; ++i) {
		scanf("%d", &c[i]);
	}
	init(1, 0, n);

	scanf("%d\n", &m);	
	while (m--) {
		char ch = getchar();
		int l, r, d, p;
		if (ch == '+') {
			scanf("%d%d%d\n", &l, &r, &d);	
			add(1, 0, n, l - 1, r, d);
		}
		else if (ch == '*') {
			scanf("%d%d%d\n", &l, &r, &d);
			mult(1, 0, n, l - 1, r, d);
		}
		else {
			scanf("%d\n", &p);			
			printf("%d\n", get(1, 0, n, p - 1));
		}
	}

	return 0;		
}
