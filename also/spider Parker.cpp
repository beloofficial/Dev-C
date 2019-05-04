#include<iostream>
#include<string>
using namespace std;
int main()
{int i,n,a[11111],b[111111],j,k=0;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i]>>b[i];}
                  for(i=1;i<=n;i++)
                  {                 
                                    for(j=i+1;j<=n;j++)
                                    {
                                                       k+=abs(a[i]-a[j])+abs(b[i]-b[j]);
                                    }
                  }    
                  cout<<k;
system("pause");
return 0;    
}
