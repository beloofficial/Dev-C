#include<iostream>
#include<cstdio>
using namespace std;
int main()
{int t1,m1,t2,m2,w,k=0,s=0;
cin>>t1>>m1>>t2>>m2;
if(t1>0&&t1<13)w=t1;
	else if(t1>12&&t1<=23)w=t1-12;
	else w=t1;
	while(t1!=t2+1)
	{	if(t1==24)t1=0;
	if(t1==0){k=k+12;s++;}
	  else if(t1>12&&t1<24){k=k+t1-12;s++;}
	  else if(t1>0&&t1<13) 	{k=k+t1;s++;}
	  t1++;
		
		
		
	}
	cout<<k-w+s-1;
	
	
return 0;
}
