#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a[8][8],aa,a1,b,c;
	string s,s1,s2;
	a[s[0]-64][s[1]-48]=1;
	for(i=1;i<=8;i++)
	{
		a[s[0]-64][i]=1;
	}
	for(i=1;i<=8;i++)
	{
		a[i][s[1]-48]=1;
	}
	aa=s[0]-64;a1=s[1]-48;
	aa=aa+a1-1;a1=1;
	while(a1<=8)
	{
		a[aa][a1]=1;
		aa--;a1++;if(aa==0)break;
	}
	
return 0;
}
