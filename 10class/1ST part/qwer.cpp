#include<iostream>
#include<cmath>
using namespace std;
int main()
{double n,m,k;
int  a[11111],i;
cin>>n;
for(i=1;i<=n;i++)

{
                 cin>>a[i];
}
cin>>m;
for(i=1;i<=n;i++)
{
                 k=pow(a[i],m);
cout<<k<<" ";
}

system("pause");
return 0;    
}
