#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

const int MAXN = 100000;

struct P {
	int a, b;
	bool operator<(const P &x) const {
		return a < x.a;
	}
} p[MAXN];

int main() {
freopen("A.in", "r", stdin);
freopen("A.out", "w", stdout);

	int n; scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &p[i].a, &p[i].b);
	}
	sort(p, p + n);
	int result = 1;
	int j = 0;
	for (int i = 1; i < n; ++i) {
		if (p[i].b <= p[i - 1].b) {
			result = max(result, p[i - 1].a - p[j].a + 1);
			j = i;
		}
	}
	printf("%d\n", result);
	return 0;
}
