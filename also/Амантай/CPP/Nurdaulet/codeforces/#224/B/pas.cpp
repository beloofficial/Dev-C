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

   int a,b,c,w,x,kol,t;    
 
int main() {
 
	#ifndef ONLINE_JUDGE
	freopen (".in", "r", stdin);
	freopen (".out", "w", stdout);
	#endif

	cin>>a>>b>>w>>x>>c;


	while(c > a)
	{
	     if (b >= x) 
         { 
                 c -= (b - (b % x)) / x;
                 kol += (b - (b % x)) / x;
                 b %= x;
         } 
             else
	     {        
                 a--;
                 c--;
                 b -= w - (x - b);
                 kol++;
	     }
	}
	cout<<kol;


}
