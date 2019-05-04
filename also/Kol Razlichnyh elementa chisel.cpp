#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int n,a[111],c=0;
cin>>n;
for(int i=1;i<=n;i++)
cin>>a[i];
for(int i=1;i<=n;i++)
 sort(a+1,a+n+1) ;
 for(int i=1;i<=n;i++)
 if(a[i]!=a[i+1])c++;
 cout<<c;
system("pause");
return 0;    
}
