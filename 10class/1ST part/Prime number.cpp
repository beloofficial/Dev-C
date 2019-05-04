#include<iostream>
#include<vector>
using namespace std;
int n;
 bool prime[111111];
  
int main()
{int i;
cin>>n;
prime[0] = prime[1] =1;
   for (int i=2; i<=n; ++i)    
      {
       if (prime[i]==0)        
	   {
	           if (i*i <= n)     
			   { 
			                for (int j=i*i; j<=n; j+=i)      
							{
								          prime[j] = 1;
							}
			   }
	   }
	  }	
	  for (int i=2; i<=n; ++i)
	  cout<<prime[i]<<" ";
	  
return 0;
}
