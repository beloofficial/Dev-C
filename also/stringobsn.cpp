#include<iostream>
#include<string>
using namespace std;
int main()
{int i,k=0,m=0,n=0;
char a[111111];
    string s;
cin>>s;
for(i=0;i<s.size();i++)
{a[i]=s[i];}
for(i=0;i<s.size();i++)
{
if(a[i]=='-'&&a[i-1]='-'&&a[i+1]=='<'&&a[i+2]=='<'&&a[i-2]=='<')m++;                       
}
                       cout<<k;

system("pause");
return 0;    
}
