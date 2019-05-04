#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <cstdlib>

#define N 1000*100

using namespace std;

int n, i, pos, pos1, ans;
struct Pair {int day;int temp;} a[N];
bool cmp(int q, int w)
{
	return a[q] < a[w];
}


int main(){


	freopen (".in", "r", stdin);
	freopen (".out", "w", stdout);

	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i].day >> a[i].temp;

	sort(a + 1, a + n + 1, cmp);

	int mx = 1;
	int j = 0;
	for (i = 1; i < n; i++)
	{
     
     	if (a[i].temp <= a[i - 1].temp)
		{
		     ans++;
			mx = max (mx, a[i - 1].day - a[j].day);
			j = i;
				
	     }
	}
	mx = max(mx, a[n - 1].day - a[j].day + 1);
  	cout << mx;


}
