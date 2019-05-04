# include <iostream> 
 #include<cstdio>
 #include<cmath>
using namespace std; 
int main () 
{ 
int n, p, m, k=0; 
cin >> n ; 
for (int i = 1 ;i <=sqrt(n); ++i) 
{ 
m = i; 
while(k<n) 
{ 
    k+=m; //3
    ++p; //2
    ++m; //3
    if (k==n)
    { 
        cout << p ; 
            return 0; 
    } 
} 
k = 0; 
p = 0; 
 
} 
cout << 1 <<endl; 
return 0; 
}
