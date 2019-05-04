// by Nurdaulet Eltayev
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <math.h>
#include <queue>
#include <map>
#include <stack>
#include <set>
#include <string>
#include <cstring>
#include <utility>
#include <algorithm>
#include <ctime>
#include <vector>
                            
using namespace std;

int i, j, n, e, t;
string s;

int main() {
 
	#ifndef ONLINE_JUDGE
	freopen ("a.in", "r", stdin);
	freopen ("a.out", "w", stdout);
	#endif

	cin >> s;
	for (j = 0; j < s.size(); j++)
	{
		if (s[j] == 'n')
			n++;
		if (s[j] == 'i')
			i++;
		if (s[j] == 'e')
			e++;
		if (s[j] == 't')
			t++;
	}
	n = n / 3;
	e = e / 3;
	cout << min(min(n,i),min(e,t));
			
	                

}
