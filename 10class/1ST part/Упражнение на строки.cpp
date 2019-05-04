#include<iostream>
#include<string>
#include <stdio.h>
#include <ctype.h>
using namespace std;
int main()
{string s;
char q[1111];
cin>>s;
for(int i=0;i<s.size();i++)
         ( s[i]=tolower(s[i]));
for(int i=0;i<s.size();i++)
{if(s[i]!=97&&s[i]!=101&&s[i]!=105&&s[i]!=111&&s[i]!=117&&s[i]!=121)cout<<"."<<s[i];}
system("pause");
return 0;    
}
