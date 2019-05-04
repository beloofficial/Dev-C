#include<iostream>
using namespace std;
int main()
{long long int n,t,k=1,ans;
cin>>n>>t;
if(n==1&&t==10){cout<<"-1";return 0;}
else if(n==1)cout<<t;
else {
for(int i=1;i<=n-2;i++)
{if(t==10)cout<<1;
       else cout<<t;}
cout<<t*5;}
system("pause");
return 0;    
}
