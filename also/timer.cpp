#include<iostream>
using namespace std;
int main()
{int a,b,c,d,e,f,y=0,u=0,i=0;
char g,h,j,k,l,m;
cin>>a>>g>>b>>h>>c>>d>>j>>e>>k>>f;//d e f
if(f>=60)y=f/60;
if(e+y>=60)u=(e+y)/60;
if(d+u>=24)i=(d+u)/24;
if (a<10) cout<<"0"<<a<<" "<<b<<" "<<" "<<c<<"+"<<i<<" "<<"days";
else if(b<10)cout<<a<<" "<<"0"<<b<<" "<<" "<<c<<"+"<<i<<" "<<"days";
else  cout<<a<<" "<<b<<" "<<" "<<c<<"+"<<i<<" "<<"days"; 
    
system("pause");
return 0;    
}
