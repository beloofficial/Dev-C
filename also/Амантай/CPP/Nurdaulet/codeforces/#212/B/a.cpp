#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int n, m, i, x; 
bool w[100001];

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	#endif


	cin >> n >> m;
	for (i = 1; i <= m; i++)
	{
		cin >> x;
		if (x == 1 || x == n)
			cout << "NO", exit(0);
		w[x] = true;
	}
	if (n / 2 < m)
		cout << "NO", exit(0);	
	i = 1;
	while (i < n)
	{
		if (!w[i] && !w[i + 3])
			i+=3;
		
		else
	
		if (!w[i] && !w[i + 2])
			i+=2;

		else

		if (!w[i] && !w[i + 1])
			i++;
        else
            cout << "NO", exit(0);
	}

		cout << "YES";
			
		


}
