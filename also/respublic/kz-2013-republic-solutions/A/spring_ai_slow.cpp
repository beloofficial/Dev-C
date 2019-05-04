#include <cstdio>
#include <algorithm>

using namespace std;

const int MAXN = 100000;

struct P {
	int a, b;
} p[MAXN];

int main() {
freopen("A.in", "r", stdin);
freopen("A.out", "w", stdout);

	int n; scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &p[i].a, &p[i].b);
	}
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (p[j].a < p[i].a) {
				P t = p[i];
				p[i] = p[j];
				p[j] = t;
			}
		}
	}
	int result = 1;
	int j = 0;
	for (int i = 1; i < n; ++i) {
		if (p[i].b <= p[i - 1].b) {
			result = max(result, p[i - 1].a - p[j].a + 1);
			j = i;
		}
	}
	result = max(result, p[n - 1].a - p[j].a + 1);
	printf("%d\n", result);
	return 0;
}
