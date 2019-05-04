#include<iostream>
#include<string>
using namespace std;
int main()
{int n,k=0;
char s[11111];
for(int i=1;i<=n;i++)
{cin>>s[i];}
    for(int i=1;i<=n;i++)
    {cout<<s[i]<<" ";
            if(s[i]==s[i+1])k++;       
    }
    cout<<k;
system("pause");
return 0;    
}
