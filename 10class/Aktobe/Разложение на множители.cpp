#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
long long int n,q=2;
cin>>n;
while(n!=1)
{
	if(n%q==0){
	n=n/q;cout<<q<<" ";}
	else q++;
}
return 0;
}
