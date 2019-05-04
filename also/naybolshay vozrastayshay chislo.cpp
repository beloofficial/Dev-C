#include<iostream>
using namespace std;
int main()
{int i,n,b=0,a[111],c=0;
cin>>n;
for( i=1;i<=n;i++)
   { 
   cin>>a[i];
   }
                 for( i=1;i<=n;i++)
   {
    if(a[i]<=a[i+1])c++;
    if(c>b)b=c;
    if(a[i]>a[i+1])c=0;
   }

     if(c>b)cout<<c;
    else cout<<b;
    
system("pause");
return 0;    
}
