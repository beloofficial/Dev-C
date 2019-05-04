#include<iostream>
#include<string>
using namespace std;
int main()
{int a[11111],j,i;
char c[11111];
    string s;
cin>>s;
for(i=0;i<s.size();i++)
{a[i]=s[i]-48;}
for(i=0;i<s.size();i++)
{
                       if(a[i]>=0&&a[i]<=9&&a[i+1]>=17&&a[i+1]<=42||a[i+1]>=39&&a[i+1]<=74)
                       {
                                                        for(j=1;j<=a[i];j++)
                                                        {
                                                               cout<<s[i+1];                                                                                                     
                                                        }                               
                                                                                                                   
                       }                       
                       else if(a[i]>=0&&a[i]<=9&&a[i+1]>=0&&a[i+1]<=9&&a[i+2]>=17&&a[i+2]<=42||a[i+2]>=49&&a[i+2]<=74)
                       {for(j=1;j<=a[i]*10+a[i+1];j++)
                       {
                                                     cout<<s[i+2];
                       }}
                       //else if(a[i]>=17&&a[i]<=42||a[i]>=49&&a[i]<=74&&a[i-1]>=17&&a[i-1]<=42)
                       //{cout<<s[i];}
}

system("pause");
return 0;    
}
