#include<iostream>
using namespace std;
int sum (int a, int b, int c)
{
    if(a<=b) a=b; else a=a;
    if(a<=c) a=c; else a=a;
    if(c<=b) c=b; else a=c;
    return a;
    
}
    
int main()
{
    int a,b,n;   
    cin>>a>>b>>n;
    cout<<sum(a,b,n);
    system ("pause");
}
