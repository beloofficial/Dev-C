#include<iostream>
using namespace std;
int main()
{int i,n,a,b,c,d=0,e,f,g,h,j;
cin>>a>>b;
e=a/10;
f=a%10;
g=b/10;
h=b%10;
if(a<=5&&a*10>=b)cout<<"0"<<a<<" "<<":"<<" "<<a*10;
else if(a<5&&a*10<b)cout<<"0"<<a+1<<" "<<":"<<" "<<(a+1)*10;
else if(a>=15&&a<20)cout<<"20"<<" "<<":"<<" "<<"02";
else if(a>5&&a<10)cout<<"10"<<" "<<":"<<" "<<"01";

else if(e>=g&&f>=g||e>=g)cout<<a<<" "<<":"<<" "<<f<<e;
else cout<<a+1<<" "<<":"<<" "<<f+1<<e;
system("pause");
return 0;    
}
