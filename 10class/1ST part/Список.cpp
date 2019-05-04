#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int n,a[1111],k=0,q;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>a[i];
}
/*sort(a+1,a+n+1);
for(i=1;i<=n;i++)
{if(i==q)cout<<a[i];
if(a[i]==a[i+1]||a[i]+1==a[i+1])k++;
else {
     if(k>0)cout<<" ..., ";
     cout<<a[i];k=0;
     }
}*/
system("pause");
return 0;    
}
