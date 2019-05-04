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
int a[111111];
int b[111111]; 
for(int i = 0; i < n; i++) { 
 scanf ("%d",&a[i]);
} 
//sort(a.begin(), a.end() + 1); 
sort(a+0,a+n+0);

for(int i = 0; i < n; i++) { 
if(i % 2 == 0) { 
b[minnum] = a[i]; 
minnum++; 
} else { 
b[maxnum] = a[i]; 
maxnum--; 
} 
} 
for(int i = 0; i < n; i++) { 
printf("%d ", b[i]); 
} 
return 0; 
}
