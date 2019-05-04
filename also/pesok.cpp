#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int a[5],b[5];

int main()
{
 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);   
 for (int i=1;i<=3;i++)
     cin>>a[i];
     sort(a+1,a+3+1);
 for (int i=1;i<=3;i++)
     cin>>b[i];
     sort(b+1,b+3+1);
     cout <<a[1]*b[1]+a[2]*b[2]+a[3]*b[3];
 //system ("pause");
 return 0;
}
