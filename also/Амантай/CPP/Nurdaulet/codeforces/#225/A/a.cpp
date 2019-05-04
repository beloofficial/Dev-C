//By Nurdaulet Eltayev
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstdlib>
                            
using namespace std;             
             


int main() {
	int i, j, n; 
	cin >> n;
	if (n % 2 == 0)
		cout << n * n / 2 << endl;
	else
		cout << n * n / 2 + 1 << endl;	
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 1; j <= n; j++)
			{
				if (j % 2 != 0)
					cout << ".";
				else	
					cout << "C";
			}
			cout << endl;		
		}
		else
		{
			for (j = 1; j <= n; j++)	
			{
				if (j % 2 != 0)
					cout << "C";
				else	
					cout << ".";
			}
			cout << endl;		
		}
			
	}

}
