#include <iostream>
#include <cstdio>

using namespace std;

int t,n[515],m[515];

int main()
{
 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);
 cin >> t;
 for (int i = 1;i <= t;i++)
 {
  cin >> n[i] >> m[i];   
 }
 for (int i = 1;i <= t;i++)
 {
     if (n[i] % 2 == 1) cout << "FIRST" << endl ;
     else cout << "SECOND" << endl ;
 }    
 return 0;
}
