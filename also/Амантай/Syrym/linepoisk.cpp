#include <iostream>
#include <cstdio>

using namespace std;

int n, i, x, a[1001], q;

int main()
{
 cin >> n;
 for (i = 1;i <= n; i++)
 {cin >> a[i];}
 cin >> x;
 for (i = 1;i <= n;i++)
 {
  if (a[i]==x)  q++;   
 }
 cout << q;
}
