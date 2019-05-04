#include<iostream>
#include<cstdio>
using namespace std;
int main()
{//freopen("1.in","r",stdin);
//freopen("1.out","w",stdout);
long long int n,a[111111],q,mx=0,mn,qq;
cin>>n;  
//-------------------------------------------------------------------
for(int i=1;i<=n*2;i++)
{cin>>a[i];}
mn=n;
mx=n;
int mxx=n;
int mnn=n;
q=n*2;
qq=n*2-1;
sort(a+2,a+n*2+1);
for(int i=3;i<=n*2;i++)
{
      if(i%2==1)
      {
            if(a[1]+a[2]<a[i]+a[i+1])break;
            else mnn--;          
      }        
}
//------------------------------------------------------------------------
for(int i=3;i<=2+(n*2-2)/2;i++)
{
                     if(a[1]+a[2]>=a[i]+a[q])mn--;              
           q--;
}
//--------------------------------------------------------------------------
for(int i=2;i<=n;i++)
{
                  if(a[1]+a[n*2]>=a[i]+a[qq])mx--;qq--;    
        
}
//----------------------------------------------------------------------------
for(int i=2;i<=n*2-1;i++)
{       if(i%2==0)
        {
                  if(a[1]+a[n*2]<a[i]+a[i+1])break;
                  else mxx--;    
        }       
}
//----------------------------------------------------------------------------
if(mx<mxx)cout<<mx<<" ";
else cout<<mxx<<" ";
if(mnn>mn)cout<<mnn;
else cout<<mn;
system("pause");
return 0;    
}
