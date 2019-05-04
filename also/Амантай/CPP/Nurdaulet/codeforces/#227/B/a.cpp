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

#define fname ""
#define ull unsigned long long
#define ll long long
#define INF 1000*1000*1000

int n, i,  j, qwe, cnt;
char a[101][101];
int main() {
 
	#ifndef ONLINE_JUDGE
	freopen ("a.in", "r", stdin);
	freopen ("a.out", "w", stdout);
	#endif


	for (i = 1; i <= 100; i++)
		for (j = 1; j <= 100; j++)
			a[i][j] = '1';
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
     		cin >> a[i][j];
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (a[i][j] == '.')
				cnt++;
	if (cnt == n * n)
		{cout << "YES"; exit(0);}
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
   	 	 		if (a[i][j] == '#' && i + 1 <= n && i + 2 <= n && j - 1 <= n && j - 2 <= n)
   	 	 		{
   	 	 			if (a[i][j] != '.' && a[i + 1][j] != '.' && a[i + 2][j] != '.' && a[i + 1][j - 1] != '.' && a[i + 1][j + 1] != '.')
    		 				{a[i][j] = '.'; a[i + 1][j] = '.'; a[i + 2][j] = '.'; a[i + 1][j - 1] = '.'; a[i + 1][j + 1] = '.'; qwe++;}
	     			else	     		                              
     					{cout << "NO"; exit(0);}
				}
    if (qwe == 0)
       cout << "NO";
       else       				
	cout << "YES";
                                  
}
