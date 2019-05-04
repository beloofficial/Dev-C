#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <map>
 
using namespace std;
 
#define sqr(a) ((a) * (a))
#define F first
#define S second
 
int n, m, k, i, j, l, a[1001][101], ans;
bool was;
struct qwe 
{   int bir, eki; }; qwe cnt[10000];
 
int main() {
       
  cin >> n >> m >> k;
  for (i = 1; i <= n; i++)
  for (j = 1; j <= m; j++)
  cin >> a[i][j];
  if (k == 0)
  {
  for (i = 1; i <= m; i++)
  for (j = i + 1; j <= m; j++)    {
  was = false;
  for (l = 1; l <= n; l++)
  if (a[l][i] > a[l][j])        {       swap(a[l][i], a[l][j]);       was = true;             }
  if (was) {      cnt[++ans].bir = i;             cnt[ans].eki = j;       }               }       }  else
  {     for (i = 1; i <= m; i++)
  for (j = i + 1; j <= m; j++)    {       was = false;
  for (l = 1; l <= n; l++)
  if (a[l][i] < a[l][j]) {swap(a[l][i], a[l][j]);     was = true;     }
  if (was)        {       cnt[++ans].bir = j;     cnt[ans].eki = i;       }               } }
  cout << ans << endl;
  for (i = 1; i <= ans; i++)    cout << cnt[i].bir << ' ' << cnt[i].eki << endl;
 
}