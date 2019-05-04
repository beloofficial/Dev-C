#include<fstream> 
#include<iostream>  
using namespace std; 
int main()
{
ifstream cin("input.txt"); 
ofstream cout("output.txt"); 
long int n,i,a,b,c,d,e,f;
cin>>n;
a=n%10;
b=n/10%10;
c=n/100%10;
d=n/1000%10;
e=n/10000%10;
f=n/100000%10; 
for (i=1;i<=n*2;i++)
{if (i%a==0&&i%b==0&&i%c==0&&i%d==0&&i%e==0&&i%f==0) {cout<<i;return 0;}}
return 0; 
} 
