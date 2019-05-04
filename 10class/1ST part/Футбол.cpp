#include<iostream>
#include<string>
using namespace std;
int main()
{int k=0,l=0,q=-99999;
    string s;
cin>>s;
for(int i=0;i<s.size();i++)
{
if(s[i]==48)k++;
else {
             if(k>q)q=k;  k=0;   
     }
     
if(s[i]==49)l++;
else {
             if(l>q)q=l;     l=0;
     }
}
if(k>q)q=k;
if(l>q)q=l;
    if(q>=7)cout<<"YES";
    else cout<<"NO";
system("pause");
return 0;    
}
