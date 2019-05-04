/*
	Author: Adilet Zhaxybay
	Date: 05.01.15
	Description: Wrong solution that just finds some LIS and uses it
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
const int INF = (int) 1e9;

int n, num;	
int h[MAXN], cost[MAXN];
int tmp[MAXN];
int tree[4 * MAXN];
int dp[MAXN];
long long totalCost;
int ans;

int getMax(int l, int r) {
	l = num + l - 1; r = num + r - 1;
	int res = 0;
	while (l <= r) {
		if (l & 1) {
			if (tree[l] > res)
				res = tree[l];
			l++;
		}
		if (r % 2 == 0) {
			if (tree[r] > res)
				res = tree[r];
			r--;
		}
		l /= 2; r /= 2;
	}
	return res;
}

void update(int pos, int val) {
	pos = num + pos - 1;
	if (val <= tree[pos])
		return;
	tree[pos] = val;
	pos /= 2;
	while (pos >= 1) {
		if (tree[pos * 2] > tree[pos * 2 + 1])
			tree[pos] = tree[pos * 2];
		else
			tree[pos] = tree[pos * 2 + 1];
		pos /= 2;
	}
}

int main() {
	freopen("F.in","r",stdin);
	freopen("F.out","w",stdout);


	scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    	scanf("%d", &h[i]);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &cost[i]);	
		totalCost += cost[i];
	}

	for (int i = 1; i <= n; i++)
		tmp[i] = h[i];
	sort(tmp + 1, tmp + n + 1);
	for (int i = 1; i <= n; i++)
		h[i] = lower_bound(tmp + 1, tmp + n + 1, h[i]) - tmp;

	num = 1;
	while (num < n)
		num *= 2;

	for (int i = 1; i < 2 * num; i++) {
		tree[i] = 0;
	}

	for (int i = 1; i <= n; i++) {
		int curMax = getMax(1, h[i]);
		dp[i] = curMax + 1;
		update(h[i], dp[i]);
	}

	ans = 1;
	for (int i = 1; i <= n; i++)
		if (dp[i] > dp[ans])
			ans = i;
		
	long long rem = 0;
	int cur = ans;
	rem += cost[cur];
	while (dp[cur] > 1) {
		for (int i = cur - 1; i >= 1; i--) 
			if (dp[i] == dp[cur] - 1 && h[i] <= h[cur]) {
				cur = i;
				rem += cost[cur];
				break;
			}
	} 

	cout << totalCost - rem << endl;

	return 0;
}                           