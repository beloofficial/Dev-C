#include<iostream>
using namespace std;
int main()
{int n,a[111111],k=-9999,q=1,z=0;
cin>>n;
for(int i=1;i<=n;i++)
{
  cin>>a[i];
  if(a[i]>=k){k=a[i];q++;z=q;}
  else {
       if(q>z)z=q;
       q=1;k=-9999;
       }
}
    cout<<z;
system("pause");
return 0;    
}
