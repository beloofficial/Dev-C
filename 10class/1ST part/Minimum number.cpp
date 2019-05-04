#include<iostream>
#include<string>
using namespace std;
int main()
{string s,ss;
cin>>s>>ss;
for(int i=0;i<s.size();i++)
{
        for(int j=0;j<ss.size();j++)
         {
                if(s[i]<ss[j]){cout<<s[i];i++;j--;}
                else if(s[i]>ss[j])cout<<ss[j];
                else {
                           if(s[i+1]<ss[j+1]){cout<<s[i];i++;j--;}
                           else if(s[i+1]>ss[j+1])cout<<ss[j];
                           else {cout<<s[i];j--;}
                     }       
         }              
}
    
system("pause");
return 0;    
}
