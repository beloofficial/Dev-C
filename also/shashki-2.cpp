#include<iostream>
#include<string>
using namespace std;
int main()
{int i,j,t,h,z,x,p,q;
string s,k;
cin>>s>>k;
t=s[0]-96;
h=k[0]-96;
z=s[1]-48;
x=k[1]-48;
p=t;
q=z;
while(z!=8&&t!=8)
{
z++;
t++;           
}
//cout<<t<<" "<<z<<" ";
while(p!=1&&q!=8)
{p--;
q++  ;
}
cout<<p<<" "<<q;
system("pause");
return 0;    
}
