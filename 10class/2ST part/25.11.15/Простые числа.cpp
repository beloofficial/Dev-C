#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
long long int n,m,z,k;
bool prime[1111111];
int main()
{long long int i;
cin>>n;
prime[0] = prime[1] =1;
   for (int i=2; i<=2*n; ++i)    
      {
       if (prime[i]==0)        
	   {
	               
			    
			                for (int j=i+i; j<=n*2; j+=i)      
							{
								          prime[j] = 1;
							}
			   
	   }
	  }	
	  for (int i=n+1; i<2*n; ++i)
	  {
	  	if(prime[i]==0)k++;
	  }
	  cout<<k;
return 0;
}
