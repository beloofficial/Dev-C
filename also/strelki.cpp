#include<iostream>
#include<string>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
    string s;
long long int i,k=0;
cin>>s;
    for(i=0;i<s.size();i++)
    {if(s[i]=='>'&&s[i+1]=='>'&&s[i+2]=='-'&&s[i+3]=='-'&&s[i+4]=='>'||s[i]=='<'&&s[i+1]=='-'&&s[i+2]=='-'&&s[i+3]=='<'&&s[i+4]=='<')k++;
                           }
    cout<<k;
//system("pause");
return 0;    
}
