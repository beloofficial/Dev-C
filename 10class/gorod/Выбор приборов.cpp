#include<iostream>
#include<cstdio>
using namespace std;
unsigned long long n,q=0;
int main()
{

cin>>n;
if(n<4)
{
cout<<1;return 0;}
while(n>3)
{
	n=n/2;
	q++;
}
cout<<q*2;
return 0;
}
