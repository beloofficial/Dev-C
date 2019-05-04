#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
int i , k , n  , g[100001] , f[100001] ,an,x,ans;
void go(int y ,int  k)
{
    	if (y > 0){
		
		if (k < f[y - 2]) go(y - 2 , k);
		
		else ans += g[y - 2],go(y - 1 , k - f[y - 2]);
	}
}
int main()
{
	freopen("fib2.in","r",stdin);
	freopen("fib2.out","w",stdout);

	cin >> n; int j;

	g[0] = 1; f[0] = 1; f[1] = 1;
    	
    	int i;
	for (i = 2; i <=45; i++)
	{
            g[i] = g[i - 1] + g[i - 2];
            f[i] = f[i - 1] + f[i - 2];
	}
	for (i = 1; i<=n ; i++)
	{
		cin >> x >> k;
		if (x == 0) cout << 1 << endl;else{
            		go(x , k);
            		cout << ans << endl;
            		ans = 0;
		}
	}
	return 0;
}
