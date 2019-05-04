/*
	Author: Adilet Zhaxybay
	Date: 05.01.15
	Description: Slow solution that uses LIS DP working in O(n^2)
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
int dp[MAXN];
long long dpc[MAXN]; 
long long totalCost;
int ans;
long long ansc;

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

	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		dpc[i] = cost[i];
		for (int j = i - 1; j >= 1; j--) {
			if (h[j] <= h[i]) {
				if (dp[j] + 1 > dp[i]) {
					dp[i] = dp[j] + 1;
					dpc[i] = dpc[j] + cost[i];
				}
				else if (dp[j] + 1 == dp[i]) {
					if (dpc[j] + cost[i] > dpc[i])
						dpc[i] = dpc[j] + cost[i];
				}
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		if (dp[i] > ans) {
			ans = dp[i];
			ansc = dpc[i];
		}
		else if (dp[i] == ans) {
			if (dpc[i] > ansc)
				ansc = dpc[i];
		}
	}

	cout << totalCost - ansc << endl;

	return 0;
}