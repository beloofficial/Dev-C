#include<iostream>
#include<string>
using namespace std;
int main()
{int i,m=0;
char a[111111];
    string s;
cin>>s;
for(i=0;i<s.size();i++)
{a[i]=s[i];}
for(i=0;i<s.size();i++)
{
if(a[i]=='A'&&a[i+1]=='s'&&a[i+2]=='l'&&a[i+3]=='a'&&a[i+4]=='n'&&a[i+5]=='l'&&a[i+6]=='o'&&a[i+7]=='h')m++;                       
}
                     if(m>0)cout<<"YES";
                     else cout<<"NETT,ON MESHOK";

system("pause");
return 0;    
}
