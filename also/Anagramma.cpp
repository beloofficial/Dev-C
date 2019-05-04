#include<iostream>
using namespace std;
int main()
{int i,j,a[1111],b[11111],k=0;
    string s,t;
cin>>s>>t;
for(i=0;i<s.size();i++)
                       {a[i]=s[i];}
                      sort(a+0,a+s.size()+0);
for(i=0;i<t.size();i++)
                       {b[i]=t[i];}
sort(b+0,b+t.size()+0);
for(i=0;i<s.size();i++)
{if(a[i]==b[i])k++;}
if(k==s.size())cout<<"Yes";
else cout<<"No";
system("pause");
return 0;    
}
