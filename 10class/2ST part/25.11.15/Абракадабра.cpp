#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
int n;
char q=98;
cin>>n;
string s;
s='a';
for(int i=2;i<=26;i++)
{
	s=q+s+s;q++;
	
}
cout<<s[n];
return 0;
}
