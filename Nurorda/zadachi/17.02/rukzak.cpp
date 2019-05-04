#include <iostream>
#include <cstdio>
using namespace std;
bool used[1111][1111];
int d[1111][1111],n,u[11111][111],w[11111][1111],a[11111],i;
int f(int n, int sum){
	if(used[n][sum]) return d[n][sum];
	d[n][sum] = max( f(n - 1, sum), f(n - 1, sum - a[i]) + a[i]);
	if( f(n - 1, sum) == d[n][sum]) w[n][sum] += w[n - 1][sum];
	if( f(n - 1, sum - a[i]) + a[i] == d[n][sum]) w[n][sum] += w[n - 1][sum - a[i] ];
	return d[n][sum];                                    
}
int main()
{int sum;
	cin >> n >> sum;   
    for (int i = 0; i <= n; ++ i)
    {cin>>a[i];}    
	for (int i = 0; i <= n; ++ i)
		u[i][0] = 1, w[i][0] = 1;
	for (int i = 0; i <= sum; ++ i)
		u[0][i] = 1, w[0][i] = 1;		
	int x = f(n, sum);
	if (x < sum) cout << "0";
	if (x == sum) 
		cout << w[n][sum];
	return 0;
}
