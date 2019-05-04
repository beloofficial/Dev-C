#include<iostream>
#include<iomanip>
using namespace std;
int main()
{//freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
     
    int i,n,a[111111],b[111111];
double k,j,l,t,ans,h,p,q,ans1;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i]>>b[i];}
for(i=1;i<=n;i++)
{
if(a[i]>b[i]){h=b[i];p=a[i];}
      else {h=a[i];p=b[i];}
      q=h*1.414;
      ans1=p-h+q;                 
}
      if(a[n]>b[n]){k=b[n];t=a[n];}
      else {k=a[n];t=b[n];}
      j=k*1.414;
      ans=t-k+j;
      std::cout<<std::fixed;
      std::cout<<std::setprecision(3)<<ans+ans1;
system("pause");
return 0;    
}
