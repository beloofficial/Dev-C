#include<iostream>
using namespace std;
int main()
{int i,n,a[1111],k=0,s=0;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
for(i=1;i<=n;i++)

  {
    if(a[i]<=a[i+1])k++;
    if(k>s)k=s;
    else s=s;        
           if(k>s)cout<<k;
           else cout<<s;      
                 
  }
    
    
    
system("pause");
return 0;    
}
