#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
long long int n,m,z,k;
bool prime[11111111];
long long int i;
int main()
{
cin>>n;
prime[0] = prime[1] =1;
   for (int i=2; i<=n/2; ++i)    
      {
       if (prime[i]==0)        
	   {
	               
			    
			                for (int j=i+i; j<=n/2; j+=i)      
							{
								          prime[j] = 1;
							}
			   
	   }
	  }	
	  for (int i=2; i<=n/2; i++)
	  {
	  	if(prime[i]==0&&n%i==0)
	  	{
	  		cout<<i<<endl;
		  }
	  }
return 0;
}
