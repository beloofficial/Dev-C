#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{int ans=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]-48>1&&s[i]-48<10&&s[i+1]>=65&&s[i+1]<=90)
        {
            for(int j=1;j<=s[i]-48;j++)
            {
                cout<<s[i+1];ans++;
                if(ans==40){cout<<endl;ans=0;}
            }
        }
        else if(s[i]-48>=1&&s[i]-48<10&&s[i+1]-48>=0&&s[i]-48<10&&s[i+2]>=65&&s[i+2]<=90)
        {
            for(int j=1;j<=(s[i]-48)*10+s[i+1]-48;j++)
            {
                cout<<s[i+2];ans++;
                if(ans==40){cout<<endl;ans=0;}
            }
            i+=2;
        }
        else if(s[i]>=65&&s[i]<=90&&i==0||s[i-1]>=65&&s[i-1]<=90){cout<<s[i];ans++;}
        if(ans==40){cout<<endl;ans=0;}
    }
     
return 0;
}
