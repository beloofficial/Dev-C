#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{//freopen("E.in","r",stdin);
//freopen("E.out","w",stdout);
    long long int i,n,a[111111],k=0;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];
sort(a+1,a+i+1);}
for(i=1;i<=n;i++)
{               
if(a[i]!=a[i+1])k++;        
}
cout<<k;
system("pause");
return 0;    
}
