#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int sum, x, a[100000],w ,num, y, n, m, j , i ;

void find (int l, int r)
{
  l = l + x - 1;
  r = r + x - 1;
	while(l <= r)
	{
		if(l % 2 == 1)
			sum += a[l];
		if(r % 2 == 0)
			sum += a[r];
		l = (l + 1) / 2;
		r = (r - 1) / 2; 
	}
}	
int main()
{
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
				cin >> n;
				x = 1;					
				while(x < n)
					x *= 2;
				for (i = 1; i <= n; i++){
					cin >> num;
					a[x + i - 1] = num;
				}
				for (j = x - 1; j >= 1; j--)			
					a[j] = a[j * 2] + a[j * 2 + 1]; 
				cin >> m;
				for (i = 1; i <= m; i++){
					cin >> w >> y;
					sum = 0;
					find(w , y);
					cout << sum << endl;
      	}
						
}			
