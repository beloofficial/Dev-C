/*
	Author: Adilet Zhaxybay
	Date: 05.01.15
	Description: Slow solution that just brutforces all variants. Works in O(2^n * n)
*/               

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

int n;
int h[MAXN], cost[MAXN];
long long ans = -1;
int inAns = -1;

int main() {
	freopen("F.in","r",stdin);
	freopen("F.out","w",stdout);


	scanf("%d", &n);

	//assert(n <= 25);

	for (int i = 1; i <= n; i++)
		scanf("%d", &h[i]);
	for (int i = 1; i <= n; i++)
		scanf("%d", &cost[i]);

	for (int i = 0; i < (1 << n); i++) {
		int prev = -1;
		long long curCost = 0;
		bool ok = true;
		int taken = 0;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) {
				curCost += cost[j + 1];
				taken++;
			}
			else {
				if (h[j + 1] < prev) {
					ok = false;
					break;
				}
				prev = h[j + 1];
			}
		}
		if (!ok)
			continue;
		if (inAns == -1 || taken < inAns) {
			inAns = taken;
			ans = curCost;
		}
		else if (taken == inAns) {
			if (ans == -1 || curCost < ans) {
				ans = curCost;
			}
		}
	}

	cout << ans << endl;

	return 0;
}