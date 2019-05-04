#include<iostream>
#include<string>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int a[1111],b[1111],i,j,c=0;
string s,k;
cin>>s>>k;
for(i=0;i<s.size();i++)
{ 
    a[i]=s[i];
 if(a[i]>=65&&a[i]<=95)
    a[i]+=32;
}
for(i=0;i<k.size();i++)
{   
    b[i]=k[i];
 if(b[i]>=65&&b[i]<=95)
    b[i]+=32;
}
sort(a+0,a+s.size()+0);
for(i=0;i<s.size();i++)
sort(b+0,b+s.size()+0);
for(i=0;i<s.size();i++)
if(s.size()==k.size())
{
    for(i=0;i<s.size();i++)
    if(a[i]==b[i])c++;
    else c=0;                    
}    
if(c==s.size())cout<<"Yes";
 else cout<<"No";
//system("pause");
return 0;    
}
