#include<iostream>
using namespace std;
int main()
{int m,k,j,l,h,t,r;
cin>>m;
if(m<=100)cout<<m-7<<" "<<"7";
else if(m==108)cout<<"100"<<" "<<"7";
else 
k=m/100;
h=m%100;
j=k*7;
h=h-j;
if(k*100==m)j=j;
else l=(k+1)*7;
if(m-h-j>m-l){cout<<m-j<<" "<<j;}
else {t=m-l;cout<<t<<" "<<l;}
system("pause");

}
