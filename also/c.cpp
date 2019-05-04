#include<iostream>
using namespace std;
int main()
{int n,m,k=0;
cin>>n>>m;
if(n<=m)cout<<n;
else{
    while(n>1)
    {
        n=n-m;
        k=k+m;n=n/2;}          
             
              
     cout<<k+1;}
system("pause");
return 0;        
}
