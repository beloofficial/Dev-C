#include<iostream>
#include<string>
using namespace std;
int main()
{int a[1111],h=0;
    string s;
cin>>s;
for(int i=0;i<s.size();i++)

{if(s[i]>52)a[i]=57-s[i];
else a[i]=s[i]-48;}
for(int i=0;i<s.size();i++)
{if(a[i]==0)h++;
else break;}
for(int i=h;i<s.size();i++)
{cout<<a[i];}
if(h>=s.size())cout<<0;
system("pause");
return 0;    
}
