#include<iostream>
#include<cmath>
using namespace std;
int main()
{int i,j,k,n,s=0,a[1111],h=0,t,r;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
for(i=1;i<=2;i++)
{                
                                                                   {
                                                                        if(a[i]+a[i+2]>h){h=a[i]+a[i+2];t=i;r=i+2;}
                                                                   }                          
                                        }    
 
                 cout<<t<<" "<<r<<" ";
                 for(t=i+1;t<r;t++)
                 {h=h+a[i];}
                 cout<<h<<" ";
system("pause");
return 0;    
}
