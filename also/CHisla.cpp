#include<iostream>
using namespace std;
int main()
{int i,n,a=10,k,d,l=1,p;
cin>>n>>k;
for(i=1;i<=n;i++)
{l=l*a;}
d=l-1;
    //cout<<d;
    for(i=1;i<=d;i++)
 {   if(i%10!=k)  cout<<i<<" "; }
 
 
 system("pause");
return 0;    
}
