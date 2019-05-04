#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j=0,l=0,a[11111];
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {a[i]=s[i];}
    for(i=0;i<s.size();i++)
    {
    if(a[i]==62&&a[i+1]==62&&a[i+2]==45&&a[i+3]==45&&a[i+4]==62) j++;
    if(a[i]==60&&a[i+1]==45&&a[i+2]==45&&a[i+3]==60&&a[i+4]==60) l++;
    }
     cout<<j+l;
 system("pause");
 return 0;   
}
