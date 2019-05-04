#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout);
    int k=0,q=0;string s,s1;
cin>>s>>s1;
if(s.size()>s1.size())
{
 while (s.size()!=q)                     
          
          
           if(s[q]>=s1[k]&&k<s1.size()){cout<<s1[k];k++;}     
          else  {cout<<s[q];q++;}                                  
                      
                      
}    
else
{
 while (s1.size()!=q)                     
          
          
           if(s1[q]>=s[k]&&k<s.size()){cout<<s[k];k++;}     
          else  {cout<<s1[q];q++;}                                  
                      
                      
} 
system("pause");
return 0;    
} 
