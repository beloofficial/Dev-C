#include<map>
#include<cmath>
#include<cstdio>
#include<string>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
#define y1 earth
using namespace std;
 
int n, i, j, mask, d[13][13][1 << 14], m;

bool bit (int x, int y)
{
	return (x & (1 << y));
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	#endif
	cin >> n >> m;
	d[1][0][0] = 1;
	for (i = 1; i <= m; i++)
  		for (j = 0; j <= n; j++)
  			for (mask = 0; mask < (1 << n); mask++) {
  				if (j == n)
  		 			d[i + 1][0][mask] += d[i][n][mask];
	  			if (bit (mask, j))
  					d[i][j + 1][mask ^ (1 << j)] += d[i][j][mask];
  				else {
  					d[i][j + 1][mask | (1 << j)] += d[i][j][mask];
  				if (!bit (mask, j + 1) && j < n - 1)
  					d[i][j + 2][mask] += d[i][j][mask];
  		 	}
  		}
	cout << d[m + 1][0][0];  					
}


