#include<iostream>
using namespace std;
int main()
{int n,i,a[11111],f=0,s=0,ff=0,ss=0;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>a[i];
if(a[i]>0){f++;ff=ff+a[i];}
if(a[i]<0){s++;ss=ss+a[i]*-1;}
}
    if(ff>ss)cout<<"first";
    else if(ff<ss)cout<<"second";
    else if(ff==ss)
    {
         if(f>s)cout<<"first";
         else if(f<s)cout<<"second";
         else {
               if(a[n]>0)cout<<"first";
               else cout<<"second";
              }     
    }
    
system("pause");
return 0;    
}
