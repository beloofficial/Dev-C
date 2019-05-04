#include<iostream>
#include<algorithm>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
    int i,n,a[111],b=0,c=0;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
sort(a+1,a+n+1);
for(i=1;i<=n/2;i++)
{b=b+a[i];}
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
    {c=c+a[i];}
    cout<<c-b*2;
//system("pause");
return 0;    
}
