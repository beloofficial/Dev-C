#include<iostream>
using namespace std;
int main()
{int i,j,n,m,a[1111],b[1111],mx=0;
cin>>n;
for(i=1;i<=n;i++)
    {
                                  cin>>a[i]>>b[i];                              
    }
for(i=1;i<=n;i++)
    {
                 for(j=i+1;j<=m;j++)
                 {
                         if(b[i]<=b[j])a[i]=a[i]+a[j];
                         else {b[i]=b[j];a[i]=a[i]+a[j];}
                         if(a[i]*b[i]>mx)mx=a[i]*b[i];
                         else mx=mx;         
                 }
    }    
    cout<<mx;
system("pause");
return 0;    
}
