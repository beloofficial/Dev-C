#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
long long int n,s,e,q=1,w,k=2,z=1,a[111111],l,x;
bool prime[1111111];
int main()
{long long int i;
cin>>n;
prime[0] = prime[1] =0;
   for (int i=2; i<100; ++i)    
      {
       if (prime[i]==0)        
	   {int q=i;
	             while(q>0)
				 {	if(q<10)x=1;	
				 	else if(q>10&&q<100)x=10;
				 	else if(q>100&&q<1000)x=100;
				 	else if(q>1000&&q<10000)x=1000;
				 	else if(q>10000&&q<100000)x=10000;
					a[z]=q/x;
					q=q%x;
					if(q<10){z++;
					a[z]=q;q=q/10;
					}
					z++; 	
					}  
			                for (int j=i+i; j<100; j+=i)      
							{
								          prime[j] = 1;
							}
	   }
	  }	
  
z--;

for(int i=1;i<=n;i++)
{
	cin>>l;
	cout<<a[l]<<" ";
	
}cout<<endl;
for(int i=1;i<=100;i++)
{
	if(prime[i]==0)
	cout<<i<<" ";
}cout<<endl;
for(int i=1;i<=z;i++)
{
	cout<<a[i]<<" ";
}
return 0;
}
