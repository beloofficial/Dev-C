#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef pair<int, long long> pii;

const int maxn = (int)1e5 + 10;

int h[maxn],c[maxn],hh[maxn];

pii f[maxn];

pii get(int pos) {
	pii res;
	while(pos >= 0) {
		res = max(res,f[pos]);
		pos = (pos & (pos + 1)) - 1;
	}
	return res;
}

void upd(int pos, pii val) {
	while(pos < maxn) {
		f[pos] = max(f[pos],val);
		pos = (pos | (pos + 1));
	}
}

int main() {

	freopen("F.in","r",stdin);
	freopen("F.out","w",stdout);

	int n; scanf("%d",&n);

	for (int i = 0; i < n; i++) {
		scanf("%d",&h[i]);
		hh[i] = h[i];
	}

	sort(hh,hh + n);	
	
	for (int i = 0; i < n; i++) {
		h[i] = lower_bound(hh,hh + n,h[i]) - hh;
	}

	long long tot = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d",&c[i]);
		tot += c[i];
	}

	for (int i = 0; i < n; i++) {
		pii r = get(h[i]);
		r.first++;
		r.second += c[i];
		upd(h[i],r);
	}

	int maxC = 0;
	for (int i = 0; i < n; i++) {
		pii r = get(h[i]);		
		maxC = max(maxC,r.first);
	}

	long long res = 0;
	for (int i = 0; i < n; i++) {
		pii r = get(h[i]);
		if (r.first < maxC) continue;
		res = max(res,r.second);
	}

	cout << tot - res << endl;

	return 0;
}