#include<iostream>
using namespace std;
int main()
{int i,n,a[111],k=1,b=0;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
for(i=1;i<=n;i++)
{
if(a[i]>a[i+1]&&a[i+1]<a[i+2]) k++;                
     
              
                 
                 
}
  cout<<k+1;
    
    
system("pause");
return 0;    
}
