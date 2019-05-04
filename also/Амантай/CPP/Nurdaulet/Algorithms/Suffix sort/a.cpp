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

#define N 600000
long long i, pos1, pos2, hash1, hash2, l, r, m, ans1, ans2, ans;
long long p[N], hash[N], pos[N];
string s;  

//--------suffix--sort----------------
bool cmp(long long a, long long b)
{
	l = 1; r = min((s.size() - a + 1), (s.size() - b + 1));
	ans1 = a - 1, ans2 = b - 1;
	while (l <= r)
	{
		m = (l + r) / 2;
		pos1 = a + m - 1;
		pos2 = b + m - 1;
		hash1 = hash[pos1] - hash[a - 1] * p[m];
		hash2 = hash[pos2] - hash[b - 1] * p[m];
		if (hash1 == hash2)
			l = m + 1, ans1 = pos1, ans2 = pos2;
		else r = m - 1;
	}                                                 
	if (s[ans1] < s[ans2])
		return true;
	else return false;
}

int main() {
  freopen ("suffarray.in", "r", stdin);
  freopen ("suffarray.out", "w", stdout);
  getline(cin, s);
  p[0] = 1;
  for (i = 1; i <= s.size(); i++)
  	p[i] = p[i - 1] * 97;
  for (i = 1; i <= s.size(); i++)
  	hash[i] = (hash[i - 1] + (s[i - 1] - 31)) * 97;
  for (i = 1; i <= s.size(); i++)
  	pos[i] = i;
 	sort(pos + 1, pos + s.size() + 1, cmp);
	for (i = 1; i <= s.size(); i++)
	 cout << pos[i] << ' ';
}           
