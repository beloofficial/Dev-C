#include<iostream>
using namespace std;
int main()
{int i,n,a[1111],k=0;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
    next_permutation(a+1,a+n+1);
   for(i=1;i<=n;i++)
   {cout<<a[i];}
    
    
system("pause");
return 0;    
}
