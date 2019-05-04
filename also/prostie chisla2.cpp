#include<iostream>
#include<cstdio>

using namespace std;

long long e, r, n, i;

int prime (int e, int r){ 
long long a[300000];
a[1] = 1;
    for (int i = e;i <= r; i++)
    { 
        if (a[i] == 0)
        {
                 for (int n = e*e;n <= r;n += e)
                 {
                     a[n] = 1;
                 }   
        }               
    }
    for (int i = e;i <= r; i++)
    {
        if (a[i] == 0){cout << i << " ";}             
    }
}

int main()
{
    cin >> e >> r;   
    prime(e,r);
    system ("pause");
    return 0;    
}
