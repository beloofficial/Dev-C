#include<iostream>
using namespace std;
int main()
{long long int n,x,y,a[111111],k=0,s=0,q=0,qq=0;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>a[i];}
cin>>x>>y;
for(int i=1;i<=n;i++)
{if(k+a[i]<=y)
{k=k+a[i];qq=k;s=i+1;cout<<s<<" ";}
else break;
}if(s<=n)
    {for(int i=s;i<=n;i++)
    {
      q=q+a[i];       
    }
    if(qq>=x&&qq<=y&&q>=x&&q<=y){cout<<s;}
    else cout<<"0";cout<<"aa";}
    else cout<<n-1;
system("pause");
return 0;    
}
