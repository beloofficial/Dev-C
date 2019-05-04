#include<iostream>
using namespace std;
int main()
{int i,a[111111],b[111111],l;
string s;
cin>>s;
for(i=0;i<s.size();i++)
{a[i]=s[i]-48;}
sort(a+0,a+s.size()+0);
for(i=0;i<s.size();i++)
{
          cout<<a[i]<< " ";                                      
}
 for(i=s.size()-1;i>-1;i--)
 {
  b[i]=a[i];
     }
sort(b+0,b+s.size()+0);
 for(i=s.size()-1;i>-1;i--)
 {cout<<b[i]<<" ";}
system("pause");
return 0;    
} 

