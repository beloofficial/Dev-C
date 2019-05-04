#include<iostream>
using namespace std;
int main()
{int i,n,a[1111],k=1,mx=-999999,s=0;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
    for(i=1;i<=n;i++)
    {
                     if(a[i]>mx)mx=a[i];
                     else mx=mx;}
      for(i=1;i<=n;i++)
      {if(a[i]!=mx)k++;
      else s=a[i]*k;
      
                       
  /*    5
   73 31 96 24 46
 */                     
                       
                       
      }
      
cout<<s<<" "<<k<<" "<<mx;
system("pause");
return 0;    
}



