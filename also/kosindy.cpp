#include<iostream>
#include<string>
using namespace std;
int main()
{string s;
int i,a[1111],k=0;
cin>>s;
for(i=0;i<s.size();i++)
{ a[i]=s[i]-48;}
    for(i=0;i<s.size();i++)
    {k=k+a[i];}
    cout<<k;
system("pause");

return 0;    
}
