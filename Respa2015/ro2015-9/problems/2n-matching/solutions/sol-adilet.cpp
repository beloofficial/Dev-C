#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <cassert>
#include <utility>
#include <iomanip>

using namespace std;

const int MAXN = 105000;

int n, x;
int cur;
int a[2 * MAXN];
vector <int> v;
int mx, mn;
	

int main() {
	freopen("E.in","r",stdin);
	freopen("E.out","w",stdout);


	scanf("%d", &n);
	scanf("%d", &x);

	for (int i = 1; i < 2 * n; i++) {
		scanf("%d", &a[i]);
	}

	sort(a + 1, a + 2 * n);

	// MX
	
	cur = x + a[1];
	for (int i = 2; i < 2 * n; i++)
		v.push_back(a[i]);

	int p = 0;
	for (int i = (int) v.size() - 1; i >= 0; i--) {
		while (p + 1 < i && v[p] + v[i] <= cur)
			p++;
		if (p < i && v[p] + v[i] > cur) {
			mx++;
			p++;
		}
	}

    // MN

    cur = x + a[2 * n - 1];
    v.clear();
    for (int i = 1; i < 2 * n - 1; i++)
    	v.push_back(a[i]);

	p = (int) v.size() - 1;
    for (int i = 0; i < (int) v.size(); i++) {
		while (p - 1 > i && v[p] + v[i] > cur)
			p--;
		if (p > i && v[p] + v[i] <= cur) {
			mn++;
			p--;
		}
    }

	cout << n - mn << " " << mx + 1 << endl;

	return 0;
}