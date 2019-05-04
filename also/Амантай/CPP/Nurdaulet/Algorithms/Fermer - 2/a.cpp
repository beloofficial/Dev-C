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
 
int n, m, i, j, mx;
int d[1001][1001], L[1001][1001], R[1001][1001];
char a[1001][1001];
vector <int> st, po;

void leftright()
{
	for (i = 1; i <= m; i++) {
		st.push_back(d[1][i]);
		po.push_back(1);
		for (j = 2; j <= n; j++)
		   if (st.back() <= d[j][i])
              st.push_back(d[j][i]), po.push_back(j);
            else {
                while (st.back() > d[j][i] && st.size() > 0) {
                      R[po.back()][i] = j - 1;
                      st.pop_back(); 
                      po.pop_back();
                }
                st.push_back(d[j][i]);
                po.push_back(j);
            }
       while (st.size() > 0) {
             R[po.back()][i] = n;
                      st.pop_back(); 
                      po.pop_back();
       }
	}
	for (i = 1; i <= m; i++) {
		st.push_back(d[n][i]);
		po.push_back(n);
		for (j = n - 1; j >= 1; j--)
		   if (st.back() <= d[j][i])
              st.push_back(d[j][i]), po.push_back(j);
            else {
                while (st.back() > d[j][i] && st.size() > 0) {
                      L[po.back()][i] = j + 1;
                      st.pop_back(); 
                      po.pop_back();
                }
                st.push_back(d[j][i]);
                po.push_back(j);
            }
        while (st.size() > 0) {
             L[po.back()][i] = 1;
                      st.pop_back(); 
                      po.pop_back();
       }
	}
}

int main() {
	#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
  #endif
  cin >> n >> m;
  for (i = 1; i <= n; i++)
  	for (j = 1; j <= m; j++)
  		cin >> a[i][j];
  for (i = 1; i <= n; i++)
  	for (j = 1; j <= m; j++)
  		if (a[i][j] == '1')
  			d[i][j] = d[i][j - 1] + 1; 
  leftright();
  for (i = 1; i <= n; i++)
  	for (j = 1; j <= m; j++)
  		mx = max(mx, d[i][j] * (R[i][j] - L[i][j] + 1));
 	cout << mx;
}

