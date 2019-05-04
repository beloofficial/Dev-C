#include <iostream>
using namespace std;
int n,m,q,a[100010],b[100010];
int main()
{
 cin >> n;
 for (int i = 1;i <= n; i++){
 cin >> a[i];
 }    
 cin >> m;
 for (int i = 1;i <= m; i++){
     cin >> b[i];
     }
 for (int i = 1;i <= m; i++){
     for (int j = 1;j <= n; j++){
         if (b[i] == a[j]) {q++; j=m;}
         }
         if (q > 0) cout << "YES\n" ;
         else cout << "NO\n" ;
         q=0; 
 }
 system ("pause");
 return 0;
}
