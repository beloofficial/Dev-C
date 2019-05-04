#include<iostream>
using namespace std;
int main()
{int n,mx,i=1,k,d=1,n1,n2,a[11111];
cin>>n>>k;
a[1]=n;mx=n;
 while(d!=k)
 {
  n1=mx/5;
  n2=(mx-n1*5)/3*5;
   n1=n1*9;
   mx=mx+n1+n2;
   i++;
   a[i]=n2+n1;
   if(i>3)mx=mx-a[i-3];
   d++;
     
 }   
 cout<<mx;
system("pause");
return 0;    
}
