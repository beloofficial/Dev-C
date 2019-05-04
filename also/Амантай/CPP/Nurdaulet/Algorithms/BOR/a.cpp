#include<map>
#include<queue>
#include<deque>
#include<stack>
#include<cmath>
#include<vector>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
     
#define sqr(a) ((a)*(a))
#define eps 1e-9
#define INF 2147483647
#define N 1000*1000*1000	
#define root 0
using namespace std;
int i , n , bor[2000][30],cur,d;
string s;
char ch;
bool used[3001];
void add(string s)
{         
	cur = 0;		
	for (int i = 0; i < s.length(); i++)
	{
		if ( bor[cur][s[i]-96] == 0)
		{
			bor[cur][s[i]-96] = ++d;
			cur = d;			
		}
		else
		if ( bor[cur][s[i]-96] != 0)
			cur = bor[cur][s[i]-96];
	}
	used[cur] = true;			
}
bool sear(string s)
{
	cur = 0;		
	for (int i = 0; i < s.length(); i++)
	{
		if ( bor[cur][s[i]-96] > 0)	
			cur = bor[cur][s[i]-96];
		else return false;
	}
	return used[cur];
}
int main()

{
	#ifndef ONLINE_JUDGE
		freopen("a.in","r",stdin);
		freopen("a.out","w",stdout);
	#endif
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> ch;
        
        if (ch == '+') cin >> s,add(s);
        
        if (ch == '?') 
        {
        	cin >> s;
        	if (sear(s))  cout << 1 << endl; 
        	else cout << 0 << endl;
		}
	}
	return 0;		
}