#include<iostream>
using namespace std;
int main()
{int i,n,a,k=0,s,j,c[1111],l,p;
cin>>a>>n;
if(a%n==0)
{ k=a/n;
 for(i=1;i<=n;i++)
 {
    cout<<k<<" ";                         
 }    
}
else {
    s=a/n;    
     j=a-s*n;
     for(int p=1;p<=j;p++)
     {
     c[p]=s+1;
     
     }
     
     for(int l=1;l<=n;l++)
     {
     c[l]=s;        
             
  }   }
     cout<<c[l]<<" "<<c[p];
system("pause");
return 0;    
}
