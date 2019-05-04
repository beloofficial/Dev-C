#include <iostream>
#include <cstdio>

using namespace std;

const int P = 1000000007;
int n, a[1112];

int main()
{
 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);
 cin >> n;
 for (int i = 1; i <= n; i++)
 {
  cin >> a[i];   
 }
 int m = n;
 for (int i = 1; i < n; i++)
 {
  if (i % 2 == 0) 
     {
          for (int j = 1; j < m; j++)
          {
           a[j] = a[j]*a[j+1];
           if (a[j] >= P) a[j] -= P;   
          }
     }   
  else
     {
          for (int j = 1; j < m; j++)
          {
           a[j] = a[j]+a[j+1];   
           a[j] %= P;
          }
     }
 m--;    
 }  
 cout << a[1];
 return 0;
}
