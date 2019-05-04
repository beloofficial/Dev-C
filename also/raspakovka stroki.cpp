#include<iostream>
#include<string>
using namespace std;
int main()
{int a[111111],j,k=0;
string s;
cin>>s;
for(int i=0;i<s.size();i++)
{
        if(int(s[i])>=48&&int(s[i])<=57)
        {//--------------------------------------------------------------------------------------------------------------
                                         if(int(s[i+1])>=48&&int(s[i+1])<=57)
                                         {
                                                                   for(j=1;j<(int(s[i])-48)*10;j++)k++;
                                                                   if(k==40){cout<<endl;k=0;}
                                                                    cout<<s[i+2];
                                         } 
//------------------------------------------------------------------------------------------------------------------------                   
             else {
                    for(j=1;j<int(s[i])-48;j++)k++;
                     if(k==40){cout<<endl;k=0;}
                                               cout<<s[i+1];
                  
                  }                                                 
        }else { 
        if(k==40){cout<<endl;k=0;}
         cout<<s[i];
                    }                                  
}
system("pause");
return 0;
}
