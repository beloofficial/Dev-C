#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int n, q, i, j, x, y, X, Y, ans;
char ch[51][51]; 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	#endif


	cin >> n;
	for (q = 1; q <= n; q++)
	{
	  for (i = 1; i <= 8; i++)
	  	for (j = 1; j <= 8; j++)
	  	{
	  		cin >> ch[i][j];
	  		if (ch[i][j] == 'K' && ans!=1)
	  		{	x = i, y = j; ans = 1;}
	  		if (ch[i][j] == 'K' && ans == 1)
	  		{	X = i, Y = j;}
	  	}

		if (ch[x - 2][y - 2] == '#' && ch[x + 2][y + 2] == '#' && ch[x + 2][y - 2] == '#' && ch[x - 2][y + 2] == '#' || 
		    ch[x - 2][y - 1] == '#' && ch[x + 2][y - 1] == '#' && ch[x - 2][y + 1] == '#' && ch[x + 2][y + 1] == '#'||
		    ch[x - 2][y] == '#' && ch[x + 2][y] == '#' ||
		    ch[x - 1][y] == '#' && ch[x + 1][y] == '#')
			cout << "NO\n";
		else	
		if (ch[X - 2][Y - 2] == '#' && ch[X + 2][Y + 2] == '#' && ch[X + 2][Y - 2] == '#' && ch[X - 2][Y + 2] == '#'|| 
		    ch[X - 2][Y - 1] == '#' && ch[X + 2][Y - 1] == '#' && ch[X - 2][Y + 1] == '#' && ch[X + 2][Y + 1] == '#'||
		    ch[X - 2][Y] == '#' && ch[X + 2][Y] == '#' ||
		    ch[X - 1][Y] == '#' && ch[X + 1][Y] == '#')
			cout << "NO\n";
	  else
			cout << "YES\n";
			
	}
		
	
}