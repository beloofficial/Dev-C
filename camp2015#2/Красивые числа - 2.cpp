#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int i,n,k=0;
cin>>n;
 	for(i=1;i<=i+1;i++)
 	{	
		 if(i<=9)k++;
		else if(i>10&&i<100) 
		{
			int a=i/10;
			int b=i%10;
			if((a+b)%2==0)k++;
		}
			else if(i>99&&i<1000) 
		{
			int a=i/100;
			int b=i/10%10;
			int c=i%10;
			if((a+b+c)%3==0)k++;
		}
			else if(i>999&&i<10000) 
		{
			int a=i/1000;
			int b=i/100%10;
			int c=i/10%10;
			int d=i%10;
			if((a+b+c+d)%4==0)k++;
		}
			else if(i>9999&&i<100000) 
		{
			int a=i/10000;
			int b=i/1000%10;
			int c=i/100%10;
			int d=i/10%10;
			int e=i%10;
			if((a+b+c+d+e)%5==0)k++;
		}
			else if(i>99999&&i<600000) 
		{
			int a=i/100000;
			int b=i/10000%10;
			int c=i/1000%10;
			int d=i/100%10;
			int e=i/10%10;
			int f=i%10;
			if((a+b+c+d+e+f)%6==0)k++;
		}
				if(k==n){cout<<i;break;}
 	}

 	return 0;
}

