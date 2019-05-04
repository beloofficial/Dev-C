#include<iostream>
#include<string>
using namespace std;
int main()
{int i,n,h=0,v=0,j;
string s[1111];
cin>>n;
for(j=1;j<=n;j++)
{cin>>s[j];}
for(j=1;j<=n;j++)
{               
                for(i=0;i<s[j].size();i++)
                {                     
                                       if(s[j][i]=='-'&&s[j][i+1]=='-'){s[j][i+1]='+';h++;}
                                      else if(s[j][i]=='+'&&s[j][i+1]=='+'){s[j][i+1]='-';h++;}          
                                                    
      
                }
cout<<h<<endl;h=0;                                                    
}
return 0;
    
}
