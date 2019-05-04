#include<string>
#include<iostream>
using namespace std;
int main()
{int mx=0,i;
    string s,k;
cin>>s>>k;
for(i=0;i<s.size();i++)
{
                       for(i=0;i<k.size();i++)
                       {
                                              if(s[i]==k[i]){mx++;break;}                                     
                       } 
}
    cout<<mx;
system("pause");
return 0;    
}
