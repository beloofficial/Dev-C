#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;
int main()
{freopen("cars.in","r",stdin);
freopen("cars.out","w",stdout);
    long long int i,b[11111],n,q=1,sum=0,j=1,k=1;
double s=0,mx=0,p;
char a;
cin>>n;
for(i=1;i<=n;i++)
{
  cin>>a;
    if(a=='+')
    {        
              cin>>b[q];q++;p=q;
    }
    else if(a=='?')
    {
         for(j=k;j<=q;j++)
         {
         s=s+b[j];               
         }
         mx=s/(p-1);
         for(j=k;j<=q;j++)
         {if(mx==b[j])sum++;}
         cout<<sum<<" ";sum=0;s=0;
    }
    else if(a=='-')
    {
    k++;    p--; 
    }
}
return 0;    
}
