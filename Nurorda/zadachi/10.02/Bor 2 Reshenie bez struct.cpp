#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int bor[15001][60],cnt;
bool b[1000001];
void add_word(string s)
{
        int n=s.size(),v=0;
        for(int i=0;i<n;i++)
        {
                int ch=s[i]-65;
                if(!bor[v][ch])
                        bor[v][ch]=++cnt;
                v=bor[v][ch];
        }
        b[v]=true;
}
bool find_word(string s)
{
        int n=s.size(),v=0;
        for(int i=0;i<n;i++)
        {
                int ch=s[i]-65;
                if(!bor[v][ch]) return 0;
                v=bor[v][ch];
        }
        return b[v];
}
int main()
{
        int t;
        cin>>t;
        for(int i=1;i<=t;i++)
        {
                string s;
                cin>>s;
                add_word(s);
        }
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
                string s;
                cin>>s;
                cout<<find_word(s)<<endl;
        }
        system("pause");
        return 0;
}
