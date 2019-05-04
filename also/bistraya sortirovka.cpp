#include<iostream>
using namespace std;
int main()
{int i,n,a[111],b;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];
sort(a+1,a+i+1);}
for(i=1;i<=n;i++)
cout<<a[i];
    
system("pause");
return 0;    
}
