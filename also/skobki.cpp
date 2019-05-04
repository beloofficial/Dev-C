#include<iostream>
using namespace std;
int main()
{
    int a=0,c=0,d=0,e=0,g=0,h=0;
    string b;
    cin>>b;
    for(int i=0;i<b.length();i++)
    {
            if(b[i]==')')a++;
            else if(b[i]=='(') c++;
            
            }
            for(int i=0;i<b.length();i++)
            {
                   if(b[i]=='}')d++;
            else if(b[i]=='{') e++;
                    
                    }
            for(int i=0;i<b.length();i++)
            
            {
                       if(b[i]=='}')g++;
            else if(b[i]=='{') h++;  
                    
                    
            }
            
            if(a==c&&d==e&&g==h)cout<<"YES";
            else cout<<"NO";
            system("pause");
            return 0;
            }
            
