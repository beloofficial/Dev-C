#include <iostream>
#include <cstdio>

using namespace std;

int i, q, j, k, n, a[2121], res;

int main()
{
 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);
 cin>>n;
 for (i = 1;i <= n;i++)
 {
  cin >> a[i];    
 }
 for (i = 1;i <= n;i++){
     for (j = i+1;j <= n;j++){
         for (q = j+1;q <= n;q++){
             for (k = q+1;k <= n;k++){
                 if (a[i]+a[j]+a[q]+a[k] == 0) {res++;}
                 }
             }
         }
     }
     cout << res;
     return 0;
}

