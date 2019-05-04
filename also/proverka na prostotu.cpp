#include <iostream>
#include <cstdio>

using namespace std;
long long used[601011];
long long n,m,q,i,j;
int main()
{cin >> m ;
for( i=1;i<=m;i++){
for( j=i*i;j<=i;j+=i){

if(used[j]==m)cout<<"false";
else cout<<"true";
}}



     
     system("pause");
 return 0;   
}
