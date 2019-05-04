#include<iostream>
using namespace std;
int main()
{int i,n,k=0,m=0;
cin>>n;
    while(n%3!=0)
    {
    n=n-5;k++;                   
    }
    while(n!=0)
    {
    n=n-3;m++;           
    }
    cout<<k<<" "<<m;
system("pause");
return 0;    
}
