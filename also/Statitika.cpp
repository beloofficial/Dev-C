#include<iostream>
using namespace std;
int main()
{int i,n,a[111],b,c[111],d,e,f[111],g;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}

   if(a[i]%2!=0)   c[i]=a[i];
    else f[i]=a[i];
    cout<<c[i]<<"  "<<f[i]<<"  ";
    
system("pause");
return 0;    
}
