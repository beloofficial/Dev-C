   #include <iostream> 
#include <string> 
#include<cstdio>
using namespace std; 
int even=0,odd=0,i; 
int main() 
{
string s; 
cin>>s; 
for(i=0;i<s.length();i++)
{ 
	{
  		if((i + 1) % 2 == 0)even+=s[i]-'0';
			if((i + 1)%2==1)odd+=s[i]-'0';
	}	 
}
if((odd-even)%11==0)cout<<"YES"; 
else cout<<"NO"; 

return 0; 
}
