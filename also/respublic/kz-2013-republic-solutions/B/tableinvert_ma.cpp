#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <list>
#include <cassert>
#include <ctime>
#include <deque>
using namespace std;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define forit(it,s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); ++it)

typedef long long ll;
typedef vector <int> vi;
int a[3000][3000], sr[3000], sc[3000];
int n, m, cur, len;

int main() {

freopen("B.in", "r", stdin);
freopen("B.out", "w", stdout);


	scanf("%d%d\n", &n, &m);	
	for (int i = 0; i < n; ++i) 
		for (int j = 0; j < m; ++j)
			scanf("%d", &a[i][j]);
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			sr[i] = (sr[i] + a[i][j]) % 2;
			sc[j] = (sc[j] + a[i][j]) % 2;
		}
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) 
		for (int j = 0; j < m; ++j) 
			if ((sr[i] + sc[j] - a[i][j] + 2) % 2 == 1) 
				++ans;
	cout << ans << endl;
	return 0;
}