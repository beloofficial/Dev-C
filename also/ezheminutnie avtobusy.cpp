#include<iostream>
using namespace std;
int main()
{int i,n,a[11111],j,k=1,mx=0;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
 for(i=1;i<=n;i++)
  {
    for(j=i+1;j<=n;j++)
    {
                   if(a[i]!=a[j])  k++;
                   else {
                        if(k>mx){mx=k;k=1;}
                        else {mx=mx;k=1;}
                        }
    }                            
 }   
 cout<<mx;
system("pause");
return 0;    
}
