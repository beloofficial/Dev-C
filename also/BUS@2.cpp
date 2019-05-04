#include<iostream>
using namespace std;
int main()
{//freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);

    int n,m,k,s,c=0,t,p;
cin>>n>>m>>k;
t=k-2;
p=n;
if(n+m<=k)cout<<1;
else {
    while(n>0)
    {m=m-2;k=k-2;n=n-k;c++;
    }
    //cout<<c<<" ";
    if(p-c*t==0)
    cout<<c;
    else cout<<0;}
system("pause");
return 0;    
}
