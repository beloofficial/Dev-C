#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int mid, n, i, x, a[1001], q;

int main()
{
 cin >> n;
 for (i = 1;i <= n; i++)
 cin >> a[i];
 sort (a + 1,a + 1 + n);
 cin >> x;
 int l = 1,r = n;
 while (l <= r)
 {
   mid = (l+r)/2;
   if (abs(a[mid]-x) < 2) q = a[mid];;
   if (a[mid] <= x) l = mid+1;
   else if (a[mid] >= x) r = mid-1;
 }
 cout << q;
}
