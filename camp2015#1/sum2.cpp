#include<iostream>
#include<cstdio>
using namespace std;
int main()
{//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
long long int a,b,c,d,x,e=1,f=1,g=1,sm=0;
cin>>x;
for(a=1;a<=x-3;a++)
{
	for(b=e;b<=x-3;b++)
	{
		for(c=f;c<=x-3;c++)
		{
			for(d=g;d<=x-3;d++)
			{
				if(a+b+c+d==x)sm++;
			}
			g++;
		}
		f++;
	}
	e++;
}
	cout<<sm;
	
return 0;
}
