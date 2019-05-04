#include <iostream> 
#include<cstdio>
using namespace std; 
int main() 
{ 
int n, m, k, sum=0; 
cin>>n>>m; 

if (n>m && m!=1 && m!=0) { 
k = n/(m-1); 

for(int i=1; i<=k; i++){ 
sum += n-i*(m-1); 
} 
} else if(n>m && m==1) sum = n; 
else if(n==m || m==0) sum=1; 

cout<<sum; 

return 0; 
}
