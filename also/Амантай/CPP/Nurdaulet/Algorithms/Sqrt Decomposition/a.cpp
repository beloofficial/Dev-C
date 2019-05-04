#include <map>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
 

int main() {
	#ifndef ONLINE_JUDGE
  freopen ("a.in", "r", stdin);
  freopen ("a.out", "w", stdout);
  #endif
  cin >> n;
  len = (int)(sqrt(n + .0) + 1);
  for (i = 1; i <= n; i++)
  	cin >> a[i];
  for (i = 1; i <= n; i++)
  	sum[(i - 1) / len + 1] += a[i];
  cin >> m;
  for (i = 1; i <= m; i++)
  {
  	cin >> l >> r >> x;
  	blog_l = (l - 1) / len + 1;
  	blog_r = (r - 1) / len + 1;
  	if (blog_l == blog_r)
  		for (i = l; i <= r; i++)
  			sum[blog_l] += x, a[i] += x;
  	else
  	{
  		for (i = l; i <= blog_l * len; i++)
  			sum[blog_l] += x, a[i] += x;
  		for (i = blog_l + 1; i <= blog_r - 1; i++)
  			s[i] += x;
  		for (i = (blog_r - 1) * len + 1; i <= r; i++)
  			sum[blog_r] += x, a[i] += x;
  	}
  }
  cin >> m;
  for (i = 1; i <= m; i++)
  {
  	cin >> l >> r;
  	ans = 0; blog_l = (l - 1) / len + 1; blog_r = (r - 1) / len + 1;
  	if (blog_l == blog_r)
  		for (i = l; i <= r; i++)
  			ans += x
  		
  }
}

