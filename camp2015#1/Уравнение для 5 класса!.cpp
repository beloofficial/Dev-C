#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
string s;
cin>>s;
if(s[0]==120&&s[1]==43)cout<<(s[4]-48)-(s[2]-48);
else if(s[0]==120&&s[1]==45)cout<<(s[4]-48)+(s[2]-48);
else if(s[2]==120&&s[1]==43)cout<<(s[4]-48)-(s[0]-48);
else if(s[2]==120&&s[1]==45)cout<<(s[0]-48)-(s[4]-48);
else if(s[4]==120&&s[1]==43)cout<<(s[0]-48)+(s[2]-48);
else if(s[4]==120&&s[1]==45)cout<<(s[0]-48)-(s[2]-48);
	
return 0;
}
