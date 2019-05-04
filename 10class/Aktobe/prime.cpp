#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
long long int n,m,s,e,q=1,w,k=2,z=0,sz=0;
bool prime[1111111];
int main()
{long long int i;
cin>>n>>m;
prime[0] = prime[1] =0;
   for (int i=2; i<=m; ++i)    
      {
       if (prime[i]==0)        
	   {
	               
			    
			                for (int j=i+i; j<=m; j+=i)      
							{
								          prime[j] = 1;
							}
			   z++;
	   }
	  }	w=z;
	for (int i=n; i<=m; ++i)  
	{
		if(prime[i]==0)
		{
			cout<<i<<endl;sz++;
		}
	}	  
if(sz==0)cout<<"Absent";

return 0;
}
