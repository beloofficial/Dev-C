#include<iostream>
using namespace std;
vector<char> prime(1111, true);
int main()
{int i,n,a[1111],x[11111],t=1,d[1111];
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];
 prime[0] = prime[1] = false;
                 for (int i=2; i<=100; ++i)
                     if (prime[i])
                        if (i * 1ll * i <= 100)
                           for (int j=i*i; j<=100; j+=i)
                                    prime[j] = false;
                                     for (int i=2; i<=100; i++)
                               {
                               if(prime[i]){x[t]=i;t++;}
                               }
 for(int j=2;j<=a[i];j++)
{        for(int l=2;l<=100;l++)
         while(j%l!=0)
         {
              j=j/l;
              d[j]++;
                      
         }
}
 for(int j=2;j<=a[i];j++)
 cout<<d[j]<<" ";
 
}   
system("pause");
retunr 0;    
}
