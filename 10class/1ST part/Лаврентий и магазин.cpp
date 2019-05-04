#include<iostream>
#include<algorithm>
using namespace std;
long long int i,n,a[1111],b[1111],c[1111],d[1111],k=0,j,s=0,q=0;
int main()
{
    cin>>n;
    for(i=1;i<=n-1;i++)
    {
     cin>>a[i];q=q+a[i];                   
    }
     for(i=1;i<=n-1;i++)
    {
     cin>>b[i];                   
    }
     for(i=1;i<=n;i++)
    {
     cin>>c[i];                   
    }
    
//////////////////////////////// 1-1-1-1 
     for(i=n-1;i>=1;i--)///////  1-1-1-1
    {
          for(j=i-1;j>=1;j--)              
          {
                  k=k+a[j];                                           
          }                
          s=s+b[i];
          d[i]=d[i]+s+k+c[i];k=0;   
    }
    d[n]=d[n]+c[n]+q;
    sort(d+1,d+n+1);
   cout<<d[1]+d[2];
////////////////////////////////////////////////////////////
system("pause");
return 0;    
}
