#include<iostream>
using namespace std;
int main()
{string s;
int i,a,n,t,m,mx=0,t1,m1,t2,m2;
char k,k1,k2;
cin>>n;
for(i=1;i<=n;i++)
{cin>>s>>t1>>k1>>m1>>t2>>k2>>m2;
if(t1-t2>0)t=24-(t1-t2);
else t=(t1-t2)*-1;
if(m1-m2>0)t=t*60-(m1-m2);
else t=t*60+((m1-m2)*-1);
if(650*60/t>=mx)mx=650*60/t;
else mx=mx;
}
  cout<<mx;
system("pause");
return 0;    
}
