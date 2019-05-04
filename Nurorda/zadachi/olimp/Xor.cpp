#include<iostream>
using namespace std;
int main()
{int n,m,a[11111],s;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>a[i];}
for(int i=1;i<=n;i++)        
    {s=s+a[i]^a[i+1];}if(s==0)cout<<"NO";
    else cout<<"YES";zSFDD
system("pause");
return 0;    
}
