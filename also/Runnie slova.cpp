#include<iostream>
#include<string>
using namespace std;
int main()
{int i,a[111111],k=0;
string s;
cin>>s;
for(i=0;i<s.size();i++)
{a[i]=s[i];}
for(i=0;i<s.size();i++)
{                      if(a[i]<=90&&a[i]>=65){
                       if(a[i]<=90&&a[i]>=65&&a[i+2]<=90&&a[i+2]>=65||a[i]<=90&&a[i]>=65&&a[i+3]<=90&&a[i+3]>=65||a[i]<=90&&a[i]>=65&&a[i+4]<=90&&a[i+4]>=65||s.size()-4<=i)k++;
else {cout<<"No";break;}
}}
if(k>=1)cout<<"Yes";
system("pause");
return 0;    
}
