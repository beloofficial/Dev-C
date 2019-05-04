#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{int i,n,a[11111],l,s=0,q=-999999;
cin>>n>>l;
for(i=1;i<=n;i++)
{cin>>a[i];}
 sort(a+1,a+n+1);
 a[0]=1;a[n+1]=l;
 for(i=n+1;i>=0;i--)
 {
           s=a[i]-a[i-1];
           if(s>q)q=s;
           else q=q;         
 }   
cout<<q;
system("pause");
return 0;    
}
