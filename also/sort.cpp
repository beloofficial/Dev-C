
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int i,n,a[1111],k=1,mx=-999999;
cin>>n;
for(i=1;i<=n;i++)
cin>>a[i];
sort(a+1,a+n+1);
for(i=1; i<=n; i++)
cout<<a[i]<<" ";                     
                     
                     
system("pause");
return 0;  
                     }
//5
// 8 2 4 7 6      
