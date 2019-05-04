#include <iostream>
using namespace std;
int a[1010], n, q=0, k;
int main()
{
 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);
 cin >> n;
 for (int i = 1;i <= n; i++){
     cin >> a[i];
     }   
 for (int i = 1;i <= n; i++){
     for (int j = 2;j <= n; j++){
     if (a[j] >= a[j-1]) q++; 
     }
     if (q > k) k=q;
     q=0; 
     }
     cout << k;
     return 0;
}
