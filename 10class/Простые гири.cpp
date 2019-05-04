#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int n,k=0,a=0;
 bool prime[111111];
  
int main()
{int i;
cin>>n;
prime[0] = prime[1] =1;
   for (int i=2; i<=50000; ++i)    
      {
       if (prime[i]==0)        
	   {
	           if (i+i <= n)     
			   { 
			                for (int j=i+i; j<=50000; j+=i)      
							{
								          prime[j] = 1;
							}
			   }
	   }
	  }
	for (int i = 1;i<=50000;i++)
		if (prime[i]==0)
			cout<<i<<" ";
	  	int q=n;
	  while(k == 0)
	  {
	  	if(prime[q+1]==0)
	  	{
	  		a=q;break;	
		}
	  	q--;	
	  }
	  for(i=1;i<=n/2;i++)
	  {
	  	cout<<i<<" "<<a<<endl;
	  	a--;
	  }
return 0;
}

