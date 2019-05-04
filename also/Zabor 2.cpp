#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{int i,n,a[11111],j=0,k=0,l=0,b[111111];
double p;
cin>>n;
for(i=1;i<=n;i++)
{
                                 cin>>a[i];b[i]=a[i];
}
//-----------------------------------------------------------------------
sort(b+1,b+n+1);                          
if(b[n]==b[n-1]&&b[n-1]==b[n-2]) {p=((b[n]*b[n])*sqrt(3))/4;
 std::cout<<std::fixed;
    std::cout<<std::setprecision(16)<<p<<endl<<n-2<<" "<<n-1<<" "<<n;}
//---------------------------------------------------------------------------
else {      
               for(i=1;i<=n;i++)
{
            if(a[i]>j)j=a[i];
            else j=j;
                       
}
//----------------------------------------------------------------------
               for(i=1;i<=n;i++)
{
            if(a[i]>k&&a[i]!=j)k=a[i];
            else k=k;
}
//------------------------------------------------------------------
               for(i=1;i<=n;i++)
{
            if(a[i]>l&&a[i]!=k&&a[i]!=j)l=a[i];
            else l=l;
}
//-------------------------------------------------------------------
if(j+k>=l&&k+l>=j&&l+j>=k){                          
p=1/4*sqrt((j+k+l)*(j+k-l)*(j+l-j)*(k+l-j));cout<<p;}
else cout<<"-1";}
system("pause");
return 0;    
}
