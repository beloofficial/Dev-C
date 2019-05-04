#include<iostream>
#include<string>
using namespace std;
int main()
{string s,ss;
int i,n,m,j; 
cin>>s;
for(i=1;i<s.size();i++)
{s[i]=s[i];}
for(i=0;i<s.size();i++)
cout<<s[i]<<" ";
system("pause");
return 0;    
}
