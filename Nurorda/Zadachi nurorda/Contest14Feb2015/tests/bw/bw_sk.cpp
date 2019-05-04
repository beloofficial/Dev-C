#include <cstdio>
#include <algorithm> 

using namespace std;

#define I64 "%Ld"
typedef long long LL;

#define maxn 50010
int n, x[maxn], y[maxn];
LL sw, sb;

int main( void )
{
  int i;
  freopen("bw.in", "rt", stdin);
  freopen("bw.out", "wt", stdout);
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d%d", &x[i], &y[i]), y[i] += 1e9;
  for (i = 0; i < n; i++)
  {
    int j = (i + 1) % n;
    LL s = (LL)y[i] * (x[j] - x[i]);
    LL sgn = s > 0 ? 1 : (s < 0 ? -1 : 0);
    sw += sgn * (abs(s) / 2);
    sb += sgn * (abs(s) / 2);
    if (s % 2)
      if ((min(x[i], x[j]) + y[i]) % 2)
        sb += sgn;
      else
        sw += sgn;
  }
  printf(I64 " " I64 "\n", abs(sb), abs(sw));
  return 0;
}
