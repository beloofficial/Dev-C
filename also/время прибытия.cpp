#include<iostream>
using namespace std;
int main()
{int h,m,hh,mm,k,j=0,r,w,q;
char t;
cin>>h>>t>>m>>hh>>mm;
k=m+mm;
if(k>59){j=k/60;k=k%60;}
else k=k;
r=h+hh+j;
if(r>23){q=r/24;w=r-24*q;}
else w=r;
if(k>9&&w>9)cout<<w<<":"<<k;
else if(k<=9&&w<=9)cout<<"0"<<w<<":"<<"0"<<k;
else if(k>9&&w<=9)cout<<"0"<<w<<":"<<k;
    else cout<<w<<":"<<"0"<<k;
system("pause");
return 0;    
}
