#include <iostream>
#include <cstdio>

using namespace std;

int n, a[1022], m, q, k;

int main()
{
 cin>>n>>m;
 for (int i = 1;i <= m; i++)
 {
     cin >> a[i];
 }   
 for (int i = 1;i <= m; i++)
 {
  for (int j = m; j >= i; j--)
  {
   if (a[j] > a[i]) {swap(a[i],a[j]);}
  }}  
 for (int i = 1;i <= m; i++)
 {q=q+a[i];++k;
 if (q >= n) {cout << k; return 0;}}     
 return 0;
}
