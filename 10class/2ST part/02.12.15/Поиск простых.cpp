#include<iostream>
using namespace std;
long long int n,m,a[1600][1600],ans,sum,q,z;
bool prime[1111111];
int main()
{
cin>>n>>m;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=m;j++)
	{
		cin>>a[i][j];
	}
}
prime[0] = prime[1] =0;
   for (int i=2; i<=100000; ++i)    
      {
       		if (prime[i]==0)        
	   		{
			                for (int j=i+i; j<=100000; j+=i)      
							{
								          prime[j] = 1;
							}
			   
	   		}
	  }	
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=m;j++)
	{
		for(int k=j;k<=m;k++)
		{q=q+a[i][k];
			if(q==0)break;
			
			if(prime[q]==0){
				sum+=q;cout<<q<<" ";
				ans++;}
				q=q*10;	
		}
		q=0;
		for(int k=i;k<=n;k++)
		{q=q+a[k][j];z++;
			if(q==0)break;
			if(z!=1)
			{
			
			if(prime[q]==0){
				sum+=q;cout<<q<<" ";if(q==137)cout<<endl<<i<<" "<<j<<endl;
				ans++;}
				q=q*10;	
		}}
		q=0;z=0;
		
	}
}
return 0;
}
