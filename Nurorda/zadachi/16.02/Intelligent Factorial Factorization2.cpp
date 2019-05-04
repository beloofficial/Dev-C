#include<iostream>
#include<vector>
using namespace std;
vector<char> prime(111, true);
int main()
{int k=2,i,n,a,x[11111],t=2,d[1111],o;
 prime[0] = prime[1] = false;
                 for (int i=2; i<=100; ++i)
                     if (prime[i])
                        if (i * 1ll * i <= 100)
                           for (int j=i*i; j<=100; j+=i)
                                    prime[j] = false;
                                     for (int m=2; m<=100; m++)
                               {
                               if(prime[m]){x[t]=m;t++;cout<<x[t]<<" ";}
                               }
cin>>n;
for(int h=1;h<=n;h++)
{cin>>a;

 for(int j=2;j<=a;j++)
{                o=j;
         while(o<=1)
         {if(o%x[k]==0){o=o/x[k];
                    d[x[k]]++;}
              else k++;
              
         }
         k=2;
}
k=2;
 for(int q=2;q<=a;q++)
 cout<<d[q]<<" ";
 
}   
system("pause");
return 0;    
}
