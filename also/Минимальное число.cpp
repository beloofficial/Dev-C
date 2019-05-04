#include<iostream>
#include<string>
using namespace std;
int main()
{int i,j,p=1;
    string s,k;
    cin>>s>>k;
  for(i=0;i<s.size();i++)
  {s[i]=s[i];}  
   for(j=0;j<k.size();j++)
  {k[j]=k[j];}
    for(i=0;i<k.size();i++)
    {s[i+s.size()]=k[i];
    }
        for(i=0;i<s.size()+k.size();i++)
    {cout<<s[i];}
//    sort(s[i]+0,s[i]+s.size()+k.size()+0);
  //  for(i=0;i<s.size()+k.size();i++)
    //{cout<<s[i];}
system("pause");
return 0;    
}
