#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>

using namespace std;
int i , ln , n , x, ta[300001], tl[300001], ans, lvl[101000],e[101000],prev[101000],f[101000],fin[101000], a[101000], len , k, y , mn , m , root;
		void add (int x1, int y1)
		{
			len++;
			e[len] = y1;
			prev[len] = f[x1];
			f[x1] = len;
		}

		void dfs(int q , int LVL)
		{
			k++;
			lvl[k] = LVL;
			fin[q] = k;
			a[k]  = q;
			int pos = f[q];
			while (pos){
				dfs(e[pos],LVL + 1);
				pos = prev[pos];
				k++;
				lvl[k] = LVL;
				a[k] = q;
			}
		}
		void tree(int l , int r)
		{
			l = l + ln - 1;
			r = r + ln - 1;
			if (l > r) swap(l, r);
			while (l <= r){
				if (l % 2){
					if (mn > tl[l]) {mn = tl[l]; ans = ta[l];}
				}
				if (!(r % 2)) {
					if (mn > tl[r]) {mn = tl[r]; ans = ta[r];}}
                		l = (l + 1) / 2;
				r = (r - 1) / 2;
			}

		}
int main()
{
		freopen("a.in","r",stdin);
		freopen("a.out","w",stdout);

		scanf("%d",&n); ln = 1; mn = 2147483647;

		for (i = 1; i <= n; i++){
			scanf("%d",&x);
			if (x) add(x,i);else
			root = i;
		}
		dfs(root,1);
		while (ln < k) ln *= 2;

		scanf("%d",&m);

		for (i = 1;i <= k; i++){
			tl[ln + i - 1] = lvl[i];
			ta[ln + i - 1] = a[i];
		}
		int qq;
		for (i = ln - 1;i >= 1; i--){
			if (tl[i*2] < tl[i*2+1]) qq = i*2;
			else qq = i*2+1;
			tl[i] = tl[qq];
			ta[i] = ta[qq];
		}

		for (i = 1; i <= m; i++){
			scanf("%d%d",&x,&y);
			tree(fin[x],fin[y]);
			cout << ans << endl;
			mn = 2147483647;
		}
	return 0;
}
