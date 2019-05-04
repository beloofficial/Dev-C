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
 
#define MAX 100001
int n, i, j, sum, N, m, k;
int a[MAX], d[MAX], tree[MAX * 2], pos[MAX], answer[MAX];
map <int, int> kol, p;
struct psp
{
	int l;
	int r;
	int pps;
} between[MAX];

void update(int x)
{
	for (j = x / 2; j >= 1; j /= 2)
		tree[j] = tree[j * 2] + tree[j * 2 + 1];
}

int findsum(int L, int R)
{
	L = N + L - 1;
	R = N + R - 1;
	sum = 0;
	while (L <= R) {
		if (L % 2 == 1)
			sum += tree[L];
		if(R % 2 == 0)
			sum += tree[R];
		L = (L + 1) / 2;
		R = (R - 1) / 2;
	}
	return sum;
}

bool cmp (psp q, psp w)
{
	return (q.l < w.l) || (q.l == w.l && q.r < w.r);
}

int main() {
	#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
  #endif
  cin >> n;
  for (i = 1; i <= n; i++)
  	cin >> a[i];
  for (i = 1; i <= n; i++) {
  	if (kol[a[i]] > 0)
  		pos[p[a[i]]] = i;
    if (kol[a[i]] == 0) {
  		d[i] = 1;
  		kol[a[i]]++;
  	}
  	p[a[i]] = i;
  }
  N = 1;
  while (N < n) N *= 2;
  for (i = N; i <= N + n - 1; i++)
  {
   	tree[i] = d[i - N + 1];
    update(i);
  }
  cin >> m;
  for (i = 1; i <= m; i++) {
  	cin >> between[i].l >> between[i].r;
  	between[i].pps = i;
  }
  sort (between + 1, between + m + 1, cmp);
  for (i = 1; i <= m; i++) {
  	for (k = 1; k < between[i].l; k++) {
  		if (tree[k + N - 1] > 0) {
  			tree[k + N - 1] = 0, tree[pos[k] + N - 1] = 1;
 			 update(pos[k] + N - 1);
  		}
  	}
  	answer[between[i].pps] = findsum(between[i].l, between[i].r);
  }
	for (i = 1; i <= m; i++)
		cout << answer[i] << endl;
}
