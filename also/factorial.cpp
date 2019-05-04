#include<iostream>
using namespace std;
long long int factorial(int q)
{
    if (q==0)return 1;
    else return q*factorial(q-1);
}
int main()
{
   long long  int a;
    cin>>a;
    cout<<factorial(a);
    return 0;    
}
