#include<iostream>
#include<string>
using namespace std;
int main()
{string s,;
int i,a[11111],k=0;
cin>>s;
for(i=0;i<s.size();i++)
{ a[i]=s[i];}
    for(i=0;i<s.size();i++)
    {
    if(a[i]>=48&&a[i]<=57&&(a[i-1]<48||a[i-1]>57))   k++;                   
    }
    cout<<k;
    
    
    
    
system("pause");
return 0;    
}
