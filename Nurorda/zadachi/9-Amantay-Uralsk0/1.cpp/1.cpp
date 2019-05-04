#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("1.in","r",stdin);
freopen("1.out","w",stdout);

    long long int n,k=0,s=0,h=0,t=0,mx=0,z=5,x=4;
cin>>n;
if(n==0)cout<<1;
else
{
k=n*2+1;h=k;
while(k>1)
{
 s=k+k-2+s;          
  k=k-2;         
}
         for(z=z;z<=s;z=z+x)
         {mx=mx+z;x=x+4;}
    for(int i=1;i<h;i=i+2)
    {t=t+i;}
    cout<<(mx+1)*2+t*2+h;
}
//system("pause");
return 0;    
}
