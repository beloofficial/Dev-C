    #include <iostream> 
#include<cstdio>
using namespace std; 

int k , n , m , d, p ,x,l,s,e; 


int main(){ 
cin >> k >> n >> m >> d; 

for(int i = 1;i <= 999; i++){ 
l = i; 
s = i; 
e = i; 
if((((l / k)+(s / n)+(e / m)) == i-d) && (l % k == 0) && (s % n == 0) && (e % m == 0)){ 
x = i; 
cout << x; 
return 0; 
} 
} 
cout <<"-1"; 
return 0; 
}
