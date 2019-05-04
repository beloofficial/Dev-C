#include<iostream>
using namespace std;
int main()
{int i,n,a[11111],b[11111],k=1,s1,mx=0,s2;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
  sort(a+1,a+n+1);//for(i=1;i<=n;i++)
  //{cout<<a[i]<<" ";}
                  for(i=1;i<=n;i++)
                  {
                     if(a[i]==a[i+1]){k++;s1=a[i];}
                     else {
                          if(k>mx){mx=k;s2=s1;k=1;}
                          else {mx=mx;k=1;}
                          }
                           
                  }  
                // cout<<mx<<" "<<s2<<endl;
                  for(i=1;i<=n;i++)
                  {
                                      if(a[i]!=s2)b[i]=a[i];
                  }
                  for(i=1;i<=n;i++)
                  cout<<b[i]<<" ";
system("pause");
return 0;
}
