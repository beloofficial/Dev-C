#include<iostream>
using namespace std;
int main()
{int i,n,a[11111],b[1111],c[1111];
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i]>>b[i]>>c[i];}
for(i=1;i<=n;i++){
if(a[i]+b[i]<c[i])cout<<1;
}

system("pause");
return 0;    
}
