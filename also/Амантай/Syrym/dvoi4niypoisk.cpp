#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int mid, k, n, i, x[100001], a[100001], q;

int main()
{
 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);
 cin >> n >> k ;
 for (i = 1;i <= n; i++)
 {
  cin >> a[i];   
 }
 for (i = 1;i <= k;i++)
 {
  cin >> x[i];   
 }
 int l = 1, r = n; 
 for (int j = 1;j <= k; j++)
 {
  q = 0;
  l = 1; r = n;
  while (l <= r)
  {
  mid = (l+r)/2;
  if (a[mid] == x[j]) {q++; cout << "YES" << endl; break;}
  else if (a[mid] < x[j]) l = mid+1;
  else r = mid-1;     
  }
  if (q == 0) cout << "NO" << endl;
 }
 return 0;
}
