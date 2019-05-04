#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

double x1, y1, n,x[111],y[111];

int main()
{
 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);
 cin >> x1 >> y1;
 x1 = x1*1000/y1;
 cin >> n;
 for (int i = 1;i <= n;i++)
 {
   cin >> x[i] >> y[i];
 }
 for (int i = 1;i <= n; i++)
 {
     x[i] = x[i]*1000/y[i];
     if (x[i] < x1) x1 = x[i];
 }
 std::cout << std::fixed<<std::setprecision(2)<<x1;
 //system ("pause");
 return 0; 
}
