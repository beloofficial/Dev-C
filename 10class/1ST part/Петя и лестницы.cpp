#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int n,k=1,m,a[11111],su=0,q=0;
cin>>n>>m;
for(int j=1;j<=m;j++)
{cin>>a[j];}
sort(a+1,a+m+1);
for(int j=1;j<=m;j++)
{
if(a[j+1]==a[j]+1&&a[j+2]==a[j+1]+1)q++;
if(a[j]==1)q++;
if(a[j]==n)q++;       
}
if(q>0)cout<<"NO";
else cout<<"YES";
system("pause");
return 0;    
}
