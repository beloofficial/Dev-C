#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int t,t1,tt,tt1,su=0;
char a;
cin>>t>>a>>t1>>tt>>tt1;
if(t1+tt1>59){tt++;t1=t1+tt1-60;}
else t1=t1+tt1;
su=(tt+t)/24;
if(tt+t>23)t=tt+t-su*24;
else t=tt+t;
if(t<10)cout<<0<<t<<":";
else cout<<t<<":";
if(t1<10)cout<<0<<t1;
else cout<<t1;		
return 0;
}
