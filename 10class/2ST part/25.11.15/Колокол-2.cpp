#include <iostream> 
#include <vector> 
#include <algorithm> 
#include<cstdio>
using namespace std; 

int main() 
{ 
int n, minnum, maxnum; 
cin >> n; 
minnum = 0; 
maxnum = n - 1; 
vector<int> a(n); 
vector<int> b(n); 

	for(int i = 0; i < n; i++) 
	{	 
		scanf("%lld",&a[i]); 
	}	  
	for(int i = 0; i < n; i++) 
	{ 
		for(int j = 0; j < n - 1; j++) 
		{ 
			if(a[j] > a[j + 1]) 
			{ 
				swap(a[j], a[j + 1]); 
			} 
		}	 
	} 
for(int i = 0; i < n; i++) 
{ 
	if(i % 2 == 0) 
	{ 
		b[minnum] = a[i]; 
		minnum++; 
	} 
	else 
	{ 
		b[maxnum] = a[i]; 
		maxnum--; 
	} 
} 
for(int i = 0; i < n; i++) 
{ 
	printf("%lld ",b[i]); 
} 
return 0; 
}
