
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
int n, m;
cin >> n;
vector < vector<int> > a (n, vector<int> (m));
for (int i=0; i<n; ++i)
	for (int j=0; j<n; ++j)
		cin >> a[i][j];
 
int ans = 0;
vector<int> d (n, -1), d1 (n), d2 (n);
stack<int> st;
for (int i=0; i<n; ++i) {
	for (int j=0; j<n; ++j)
		if (a[i][j] == 1)
			d[j] = i;
	while (!st.empty()) st.pop();
	for (int j=0; j<n; ++j) {
		while (!st.empty() && d[st.top()] <= d[j])  st.pop();
		d1[j] = st.empty() ? -1 : st.top();
		st.push (j);
	}
	while (!st.empty()) st.pop();
	for (int j=n-1; j>=0; --j) {
		while (!st.empty() && d[st.top()] <= d[j])  st.pop();
		d2[j] = st.empty() ? n : st.top();
		st.push (j);
	}
	for (int j=0; j<n; ++j)
		ans = max (ans, (i - d[j]) * (d2[j] - d1[j] - 1));
}
 
cout << ans;
system("pause");
return 0;
}
