#include<iostream>
#include<string>
using namespace std; 
int main()
{int i,n,a[11111],b[11111],k;
string s,t;
cin>>s>>t;
   if(s>t)cout<<s;
   else if(s<t)cout<<t;
   else if(s.size()>t.size())cout<<s;
   else cout<<t;
    
system("pause");
return 0;    
}
