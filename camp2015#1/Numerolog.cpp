#include<iostream>
#include<string>
using namespace std;
int main()
{int i,n,k=0;
string s;
cin>>s;
while(s[1]>=9)
    {for(i=0;i<s.size();i++)
    {s[i]=s[i]-48;}
    for(i=0;i<s.size();i++)
    {s[1]=s[1]+s[i];}
    }
    cout<<k;
system("pause");
return 0;    
}
