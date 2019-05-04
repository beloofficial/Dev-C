#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <ctime>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <deque>
 
using namespace std;
 
#define sqr(a) ((a) * (a))
 
int n, m, k, i, j, cur;
long long ans, MAX, w[30];
int which[30], z[30], a[33554433], all[33554433];
string s;
bool was[30];
 
bool bit(int x, int y)
{
        return x & (1 << y);
}
 
void out()
{
 for (j = 0; j < n; ++j)
        if (bit(ans, j))
                printf("%d ", j + 1);    
exit(0);
}
 
void f(int mask, long long x, long long sum)
{
     int i, c = 0;
  if ((double(clock()) / CLOCKS_PER_SEC) > 1.95)
                out();
        if (x > k) return;
        if (MAX < sum)
                ans = mask,     MAX = max(MAX, sum);
        for (i = 1; i <= m; ++i)
        {
                c = 0;
    if (!was[i])
    {
            was[i] = true;
            for (j = 0; j < n; j++)
                if (bit((mask | which[i]), j))
                        c += a[j + 1];
                        f(mask | which[i], c, sum + z[i]);
                        was[i] = false;
    }
        }
}
 
int main() {
        #ifndef ONLINE_JUDGE
  freopen ("a.in", "r", stdin);
  freopen ("a.out", "w", stdout);
  #endif
  cin >> n >> m >> k;
 
  for (i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
        cur = 0;
  for (i = 1; i <= m; ++i)
        scanf("%d", &z[i]);
   scanf("\n");
  for (i = 1; i <= m; ++i)
  {
        getline(cin, s);
        for (j = 0; j < s.size(); ++j)
                if (s[j] >= '1' && s[j] <= '9')
                        cur = cur * 10 + (s[j] - '0');
                else
                {
                        which[i] = which[i] | (1 << (cur - 1));
                        cur = 0;
                }
        which[i] = which[i] | (1 << (cur - 1));
        cur = 0;
  }
  f(0, 0ll, 0ll);
  out();
}