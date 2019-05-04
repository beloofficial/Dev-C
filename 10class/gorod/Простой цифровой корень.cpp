#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
bool prime[222222222];
long long int n,k=0;
int main()
{
cin>>n;

	prime[0] = prime[1] =1;
   for (int i=2; i<=sqrt(n); ++i)    
      {
       if (prime[i]==0)        
	   {
	               
			    
			                for (int j=i*i; j<=n; j*=i)      
							{
								          prime[j] = 1;
							}
			   
	   }
	   if(prime[n]==1)break;
	  }	
	
	while(k==0)
	{
		if(prime[n]==0)
		{
			cout<<n;return 0;
		}
		else if(prime[n]!=0&&n<10)
		{
			cout<<0;return 0;
		}
		else 
		{
			n=n/1000000000+n/100000000%10+n/10000000%10+n/1000000%10+n/100000%10+n/10000%10+n/1000%10+n/100%10+n/10%10+n%10;
		}
	}
return 0;
}
