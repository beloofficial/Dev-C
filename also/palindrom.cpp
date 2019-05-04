#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
string s;
int q,n,sz=2,ans;
int main()
{cin>>s;
for(int i=1;i<=s.size()/2;i++){
        for(int j=0;j<s.size();j++){
            n=j+sz-1;
    for(int k=0;k<sz/2;k++){
            if(s[j+k]==s[n-k])q++;}
            if(q==sz/2)ans++;
            q=0;}
            sz+=2;}
    cout<<ans;
system("pause");
return 0;    
}
