#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std; 

const int mod = int(1e9+7);

long long a[111111];
int n, m;

int main() {
freopen("F.in", "r", stdin);
freopen("F.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		int x;
		scanf("%d", &x);
		a[i] = x;
	}
	scanf("%d\n", &m);
	while (m--) {
		int l, r, d, p;
		char ch = getchar();
		if (ch == '+') {
			scanf("%d%d%d\n", &l, &r, &d);			
			for (int i = l; i <= r; ++i)
				(a[i] += d) %= mod;				 
		}
		else if (ch == '*') {
			scanf("%d%d%d\n", &l, &r, &d);
			for (int i = l; i <= r; ++i) 
				(a[i] *= d) %= mod;
		}
		else {
			scanf("%d\n", &p);
			printf("%d\n", int(a[p]));
		}
	}
	return 0;		
}
