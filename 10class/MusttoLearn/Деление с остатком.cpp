#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
string a;
long long int x=0,b;
int main()
{
  
  cin>>a;
  cin>>b;
  
  for(int i=0;i<a.size();i++)
  {
  
    x=(x*10+(a[i]-48));
    x=x%b;
	}
  cout<<x;
  
 return 0; 
}
