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
 
int n, i, x, a[1000001], j;

int main() {
	#ifndef ONLINE_JUDGE
  freopen ("a.in", "r", stdin);
  freopen ("a.out", "w", stdout);
  #endif
  cin >> n;
  for (i = 1; i <= n; i++) {
  	scanf("%d", &x);
  	a[x]++;
  }
  for (i = 0; i <= 100000; i++)
  	for (j = 1; j <= a[i]; j++)
  		cout << i << ' ';
}

