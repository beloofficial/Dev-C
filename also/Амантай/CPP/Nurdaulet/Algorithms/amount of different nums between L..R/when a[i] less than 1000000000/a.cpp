#include<map>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<vector>
#include<iostream>
#include<algorithm>

#define sqr(a) ((a)*(a))
#define eps 1e-9
#define INF 2147483647
#define N 1000*101

using namespace std;
struct Pair {int pos; int l; int r;}bet[N];
int len,n,m,i,j,bit[N*2],next[N],a[N],res[N],ans[N];

map <int,bool> was;
map <int,int> pr;

void update(int x)
{
    x/=2;
	while (x)
	{
		bit[x] = bit[x*2]+bit[x*2+1];
		x/=2;
	}
}
int get_sum(int l , int r)
{
	l+=len-1;
	r+=len-1;
	int sum = 0;
	while (l <= r)
	{
		if (l % 2 == 0) l/=2; else sum+=bit[l],l=(l+1)/2;
		if (r % 2 == 1) r/=2; else sum+=bit[r],r=(r-1)/2;
	}
	return sum;
}
bool cmp(Pair q, Pair w)
{
		return (q.l < w.l || (q.l == w.l && q.r < w.r));
}
int main()

{
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	cin >> n;
	len = 1;
	while (len < n) len*=2;

	for (i = 1; i <= n; i++)
		cin >> a[i];

	for (i = 1; i <= n; i++)
		if (was[a[i]] == false)was[a[i]] = true,bit[len+i-1] = 1,pr[a[i]] = i,update(len+i-1);
			else next[pr[a[i]]] = i,pr[a[i]] = i;
        cin >> m;

	for (i = 1; i <= m; i++)
		cin >> bet[i].l >> bet[i].r,bet[i].pos = i;

	sort(bet+1,bet+m+1,cmp);

	for (i = 1; i <= m;i++)
	{
		for (j = 1; j < bet[i].l; j++)
			bit[next[j]+len-1] = bit[j+len-1],update(next[j]+len-1);
		ans[i] = get_sum(bet[i].l,bet[i].r);
	}
	for (i = 1;i <= m; i++)
		res[bet[i].pos] = ans[i];
	for (i = 1;i <= m; i++)
		cout << res[i] << " ";
	return 0;
}
