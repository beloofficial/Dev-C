//Solution by Zhusupov Nurlan
#include <iostream>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <ctime>

using namespace std;

typedef long long LL;
typedef map<string , int> MSI;
typedef vector<int> VI;
typedef pair<int, int> PII;

#define pb(x) push_back(x)
#define sqr(x) ((x) * (x))
#define F first
#define S second
#define SZ(t) ((int) t.size())
#define len(t) ((int) t.length())
#define base LL(1e9 + 7)
#define fname ""
#define sz 1000 * 1000
#define EPS (1e-8)
#define INF ((int)1e9 + 9)
#define write(xx) printf("%d" , xx);
#define readln(xx) getline(cin , xx)
#define read(xx) scanf("%d" , &xx)
#define mp make_pair

const double PI  = acos(-1.0);

int n, m, l, r, x[sz], cur;
vector <pair<int, int> > Add[sz], Del[sz];
int t[sz], s[sz];

void upd(int v, int l, int r, int p, int x)
{
    if (l == r)
    {
        s[v] += x;
        t[v] += x;
    }
    else
    {
        int m = (l + r) >> 1;
        if (p <= m)
            upd(v + v, l, m, p, x);
        else
            upd(v + v + 1, m + 1, r, p, x);
        t[v] = t[v + v] + t[v + v + 1];
        s[v] = max(t[v + v + 1] + s[v + v], s[v + v + 1]);
    }
}

int get(int v, int l, int r, int x)
{
    if (x + s[v] <= 0)
        return 0;
    if (l == r)
        return l;
    int m = (l + r) >> 1;
    if (x + s[v + v + 1] > 0)
        return get(v + v + 1, m + 1, r, x);
    return get(v + v, l, m, x + t[v + v + 1]);
}

int main()
{
        freopen("A.in", "r", stdin);
        freopen("A.out", "w", stdout);
        ios_base::sync_with_stdio(false);
        cin >> n >> m;

        for (int i = 1; i <= m; i++)
        {
            cin >> l >> r >> x[i];
            int c;
            c = x[i] > 0 ? 1 : -1;
            Add[l].pb(mp(c, i));
            Del[r].pb(mp(-c, i));
        }
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < Add[i].size(); j++)
                upd(1, 1, m, Add[i][j].S, Add[i][j].F);
            cout << x[get(1, 1, m, 0)] << " ";
            for (int j = 0; j < Del[i].size(); j++)
                upd(1, 1, m, Del[i][j].S, Del[i][j].F);
        }
}