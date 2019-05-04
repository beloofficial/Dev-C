#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{ //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
int k=0,q=-999999999,a,b=1,c;
string s,ss;
cin>>s;
for(int i=0;i<s.size();i++)
{
          
           for(int j=0;j<s.size();j++)
           {
                   if(i!=j)
                   {       if(s[j]>9)s[j]=s[j]-48;
                          k=k+s[j]*b;   
                           if(b==1)b=-1;
                   else b=1;     
                   }        
           }   
    
           
           if(q<k)q=k;
           else q=q;
           k=0;b=1;
           for(int j=0;j<s.size();j++)
           {
                   abs(s[j]);
           }
}
cout<<q;
system("pause");
return 0;    
}
