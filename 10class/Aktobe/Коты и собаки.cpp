#include<iostream>
#include <cstdio>
#include <cstdlib>
#include<stdio.h>
using namespace std;
long long int n,k,m,c[11111];
long long dp[10000000];
bool used[10000000];
long long search(long long int a)
{
	if (used[a]) {
		return dp[a];
	}
	used[a] = true;
		if(a==n) dp[a]++;
		if(a<n){
			
			dp[a] += search(2*a) + search(a+1);
		}
	dp[a] %= m;
	return dp[a];
}
int main()
{
ios_base::sync_with_stdio(0);
cin>>n>>m;

search(2);
	cout<<dp[2];
return 0;
}
