#include<iostream>
using namespace std;
int main()
{int n,m,a,k,l;
cin>>n>>m>>a;
if(n%a!=0)k=n/a+1;
else k=n/a;
if(m%a!=0)l=m/a+1;
else l=m/a;
cout<<k+l;
    
    
system("pause");
return 0;    
}
