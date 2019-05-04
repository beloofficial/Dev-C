#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
long long int n,s,e,q=1,w,k=2,z=0;
bool prime[1111111];
int main()
{long long int i;
cin>>n;
prime[0] = prime[1] =0;
   for (int i=2; i<=n; ++i)    
      {
       if (prime[i]==0)        
       {
                    
                 
                            for (int j=i+i; j<=n; j+=i)      
                            {
                                          prime[j] = 1;
                            }
               z++;
       }
      } w=z;
    for (int i=1; i<=n; ++i)  
    {
        if(prime[i]==0)
        {
            z=i;
            z=n-z;
            if(prime[z]==0)
            {
            cout<<i<<" "<<z;return 0;}
        }
    }     
 
 
return 0;
}
