#include<string>
#include<iostream>
using namespace std;
int main()
{int n,k=0,i;
cin>>n;
    string s[1111];
    for(i=1;i<=n;i++)
    {
           cin>>s[i];                 
    }
    for(i=1;i<=n;i++)
    {
    if(s[i][0]==65||s[i][0]==66&&s[i][1]==69||s[i][0]==66&&s[i][1]==82||s[i][0]==67||s[i][0]==71||s[i][0]==82||s[i][0]==83||s[i][0]==84||s[i][0]==86||s[i][0]==87&&s[i][1]==72||s[i][0]==87&&s[i][1]==73)k++;                 
    }
    cout<<k;
system("pause");
return 0;    
}
