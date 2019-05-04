#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

string a, aa;
int i, h1, h2, m1, m2, s1, s2;

int main()
{

	#ifndef ONLINE_JUDGE
	freopen ("a.in", "r", stdin);
	freopen ("a.out", "w", stdout);
	#endif

	cin >> a;
 	cin >> aa;
	h1 = (a[0] - '0') * 10 + (a[1] - '0');
	h2 = (aa[0] - '0') * 10 + (aa[1] - '0'); 	
	m1 = (a[3] - '0') * 10 + (a[4] - '0');
	m2 = (aa[3] - '0') * 10 + (aa[4] - '0');
	s1 = (a[6] - '0') * 10 + (a[7] - '0');
	s2 = (aa[6] - '0') * 10 + (aa[7] - '0');		

	cout << abs(h1-h2)

}
