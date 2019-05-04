#include <iostream>
#include <cstdio>

using namespace std;

int n, a[70122], q, w[70122], r[70122], x[70122], res;

int main()
{
 cin>>n;
 for (int i = 1;i <= n; i++)
 {
     cin >> a[i];
 }   
 cin >> q;
 for (int i = 1;i <= q; i++)
 {
  cin>>w[i]>>r[i]>>x[i];   
 }
 for (int i = 1;i <= q; i++)
 {
     res = 0;
     for (int j = w[i];j <= r[i]; j++)
     {
         if (a[j] == x[i]) {cout<<1;++res;break;}
     }
     /*if (res == 0) {
          for (int j = r[i]/2;j <= r[i]; j++)
     {
         if (a[j] == x[i]) {cout<<1;++res;break;}
     }}*/
     if (res == 0) cout<<0;
     
 }
 return 0;
}
