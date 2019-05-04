#include <iostream>
#include <cstdio>

using namespace std;

int n, a[10012];

int main()
{
 cin >> n;
 for (int i = 1;i <= n; i++)
 {
  cin >> a[i];    
 }
 for (int i = 1;i <= n; i++)
 {
  for (int j = n; j >= i; j--)
  {
   if (a[j] < a[i]) {swap(a[i],a[j]);}
  }   
 }   
 for (int i = 1; i <= n; i++)
 {
  cout << a[i] << " ";    
 }
 system ("pause");
 return 0;
}
