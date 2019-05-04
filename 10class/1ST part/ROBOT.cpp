#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{freopen("robot.in","r",stdin);
freopen("robot.out","w",stdout);
   long long  int n,k,a[111111],mn,mx,sum=0,i,q=0,w=0,min=0,max=0,z=0,x=0,zz=-9999999,xx=-9999999,v;
cin>>n>>k;
for(i=1;i<=n;i++)
{
cin>>a[i];
}
    
    sort(a+1,a+n+1);
//////////////////////////////////////////////////////////////////////////////////////////////    
   v=k;
          for(i=1;i<=n;i++)
          {
           if(a[i]<0&&v>0){z=z+(a[i]*-1);if(z>zz)zz=z; }
           
                else k=0; 
                 if(v<1)zz=zz+a[i];
                        v--;
          }   
          zz=abs(zz); 
          for(i=n;i>=1;i--)
          {
           if(a[i]>0&&k>0){x=x+(a[i]*-1);if(x*-1>xx)xx=x;  }
               else k=0;  
                 if(k<1)xx=xx+a[i]; 
                        k--;
          }
          xx=abs(xx); 
          if(zz>=xx)cout<<zz;
          else cout<<xx;      
////////////////////////////////////////////////////////////////////////////////////////

//system("pause");
return 0;    
}
