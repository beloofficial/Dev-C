#include<iostream>
using namespace std;
int main()
{int i,n,a[11111],f=0,s=0,t=0,j=0,k=0,l=0;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
for(i=1;i<=n;i++)
{if(i%2!=0){
                 if(a[1+s]>=a[n-t]){f+=a[1+s];s=s+1;}
 else {f+=a[n-t];t=t+1;}  }
 else {        
      if(a[1+s]>=a[n-t]){k+=a[1+s];s=s+1;}
 else {k+=a[n-t];t=t+1;}       
}   }
cout<<f<<":"<<k;
system("pause");
return 0;    
}
