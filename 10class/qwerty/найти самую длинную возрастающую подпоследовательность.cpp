#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int n,a[111111];
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
int d[111111], p[111111]; 
for (int i=0; i<n; ++i) {
	d[i] = 1;
	p[i] = -1;
	for (int j=0; j<i; ++j)
		if (a[j] < a[i])
			if (1 + d[j] > d[i]) {
				d[i] = 1 + d[j];
				p[i] = j;
			}
}
int ans = d[0],  pos = 0;
for (int i=0; i<n; ++i)
	if (d[i] > ans) {
		ans = d[i];
		pos = i;
	}
cout << ans << endl;
vector<int> path;
while (pos != -1) {
	path.push_back (pos);
	pos = p[pos];
}
reverse (path.begin(), path.end());
for (int i=0; i<(int)path.size(); ++i)
	cout << a[path[i] ]<< ' ';
return 0;
}
