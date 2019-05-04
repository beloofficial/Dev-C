#include<iostream>
using namespace std;
int main()
{int i,n,a[111],k,b[111];
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
for(i=1;i<=n-1;i++)
{if(a[i]==a[i])a[i+1]=a[i];    }
 cout<<a[i+1];   
    
system("pause");
return 0;    
}
