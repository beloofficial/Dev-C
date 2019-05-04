#include <iostream>
#include <vector>
#include <cstring>
#include <cstdio>
using namespace std;

const int maxn = 5005;

int a[maxn];
int w[maxn];
int nxt[maxn],prv[maxn];
vector<int> pos[maxn];

inline int get(int len) {
	return len * (len + 1) / 2;
}

int main() {
	#ifdef LOCAL
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	freopen("C.in","r",stdin);
	freopen("C.out","w",stdout);

	int n; cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		pos[a[i]].push_back(i);
	}

	long long res = 0;

	for (int i = 2; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			w[a[j]]++;
		}
		int prev = 0;
		for (int j = 1; j < i; j++) if (w[a[j]] > 0) {
			prv[j] = prev;
			prev = j;
		}
		prv[i] = prev;
		prev = i;
		for (int j = i - 1; j >= 1; j--) if (w[a[j]] > 0) {
			nxt[j] = prev;
			prev = j;
		}
		nxt[0] = prev;
		int curCnt = 0;
		int curPos = 0;
		while(curPos < i) {
			curCnt += get(nxt[curPos] - curPos - 1);
			curPos = nxt[curPos];
		}
		res += curCnt;
		for (int j = n; j > i; j--) {
			w[a[j]]--;
			if (w[a[j]] == 0) {
				for (int k = 0; pos[a[j]][k] < i; k++) {
					int p = pos[a[j]][k];
					int pr = prv[p];
					int nx = nxt[p];
					curCnt -= get(p - pr - 1);	
					curCnt -= get(nx - p - 1);
					nxt[pr] = nx;
					prv[nx] = pr;
					curCnt += get(nx - pr - 1);
				}
			}
			res += curCnt;
		}
		w[a[i]]--;
	}

	cout << res << endl;

	return 0;
}
