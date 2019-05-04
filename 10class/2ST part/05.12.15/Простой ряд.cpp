#include<iostream>
#include<cstdio>
using namespace std;
bool prime[1111111];
long long int t;
char s[11111];
int main()
{
long long int n,a[22222],sz=-1,z;
cin>>n;
   for (int i=2; i<=22000; ++i)    
	{
   		 if (prime[i]==0)        
		{
			for (int j=i+i; j<=22000; j+=i)      
			{
				prime[j] = 1;
			}
			int q=i;
			if(q<10)z=1;
			else if(q>9&&q<100)z=10;
			else if(q>99&&q<1000)z=100;
			else if(q>999&&q<10000)z=1000;
			else if(q>9999&&q<100000)z=10000;
				while(z!=0)
				{	
					sz++;
					s[sz]=q/z%10+48;
					z=z/10;
				}
				
		}
	}	
for(int i=1;i<=n;i++)
{
	cin>>a[i];
	cout<<s[a[i]-1];	
}

return 0;
}
