#include<iostream>
#include<vector>
#include <algorithm>
#include<cstdio>
#include <cstdlib>
#include<stdio.h>
using namespace std;
const int INF = 1e9+7;
long long int p[1111111];
vector < int > ans;
long long int dp[1111111],n,cur;

int main()
{ios_base::sync_with_stdio(0);
cin>>n;
p[1]=-1;
for (int i = 2; i <= n; i++) {
	dp[i] = INF;
}

for(int i=1;i<=n;i++)
{
	if(dp[i+1]>dp[i]+1)
	{
		dp[i+1]=dp[i]+1;
		p[i+1]=i;		
	}
	if(dp[i*3]>dp[i]+1) {

	
		dp[i*3]=dp[i]+1;
		p[i * 3]=i;
	}
	if(dp[i*2]>dp[i]+1)
	{
		dp[i*2]=dp[i]+1;
		p[i * 2]=i;
	}
}
if (dp[n] == INF) {
	cout << "NO";
	return 0;
}
cur = n;
	while(cur!=-1)
	{
		ans.push_back(cur);
		cur=p[cur];
	}
	reverse(ans.begin(), ans.end());
	cout<<ans.size()-1<<endl;
	for(int i=0;i < ans.size();i++)
	cout<<ans[i]<<" ";
	return 0;
}
