#include<iostream>
using namespace std;
int main()
{int n,i,j,k=0;
char a[1111][1111];
cin>>n;
for(i=1;i<=n;i++)
{
 for(j=1;j<=n;i++)
 {
       cin>>a[i][j];            
 }                 
}
    for(i=1;i<=n;i++)
{
 for(j=1;j<=n;i++)
 {
       if(a[i][j]=='.') {k++;break;}         
 }     
 if(k==n)      
}
system("pause");
return 0;    
}
