#include<iostream>
#include<string>
using namespace std;
int main()
{int i,a[11111];
    string s;
    cin>>s;
for(i=0;i<s.size();i++)
{a[i]=s[i]-48;}
    for(i=0;i<s.size();i++)
    cout<<a[i]<<" ";
system("pause");
return 0;    
}
