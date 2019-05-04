#include <map>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int i, j, k, n;
double a[101][101], p;

int main() {
	#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
  #endif
  cin >> n;
  for (i = 1; i <= n; i++)
  	for (j = 1; j <= n + 1; j++)
  		cin >> a[i][j];
	for (i = 1; i <= n; i++) {
        p = a[i][i];
		for (j = i; j <= n + 1; j++)
            a[i][j] /= p;
		for (j = 1; j <= n; j++)
            if (i != j){
            p = a[j][i];
			for (k = i; k <= n + 1; k++)
				a[j][k] -= (a[i][k] * p);
		}
	}
	for (i = 1; i <= n; i++)
		printf("%.4lf ", a[i][n + 1]);
}

