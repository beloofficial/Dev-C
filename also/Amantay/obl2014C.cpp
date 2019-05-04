#include <iostream>
#include <cstdio>

using namespace std;

int n, a[100121], b[100121], u[100121];

int main()
{
 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);
 cin >> n;
 for (int i = 0;i < n; i++)
 {
  cin >> a[i];    
 } 
 int m = n;
	for (int i = 0; i < n - 1; ++i) 
    {
		int x = -1, y = -1;
		for (int j = 0; j < m; ++j) 
        {
			if (!u[j] && (x == -1 || (a[j] < a[x] || (a[j] == a[x] && b[j] < b[x])))) 
            {x = j;}
		}
		u[x] = true;
		for (int j = 0; j < m; ++j) 
        {
			if (!u[j] && (y == -1 || (a[j] < a[y] || (a[j] == a[y] && b[j] < b[y])))) 
            {y = j;}
		}
		u[y] = true;
		a[m] = a[x] + a[y];
		b[m] = max(b[x], b[y]) + 1;
		++m;
	}
	cout << b[m-1];
 return 0;
}
