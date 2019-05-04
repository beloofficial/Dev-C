#include<iostream>
#include<string>
using namespace std;
int main()
{int i,n,a[11111],j,s=0;
string k[1111],d[11111];
double b[11111],c[11111];
cin>>n;
for(i=1;i<=n;i++)
                 {
                        cin>>a[i];
                        
                           for(j=1;j<=a[i];j++)
                           {
                                               cin>>b[j]>>k[j];
                           }
                 }  
  for(i=1;i<=n;i++)                 
  {  
                                    s=s+a[i];
  }
     for(i=1;i<=a[i];i++)
     {
        c[i]=a[i];
                   
     }
     for(i=1;i<=s;i++)
     cout<<c[i];
system("pause");
return 0;    
}
