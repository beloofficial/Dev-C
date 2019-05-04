#include<iostream>
using namespace std;
int main()
{int n,a[111111],b[111111],c[111111],sm=0;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>a[i]>>b[i]>>c[i];}
for(int i=1;i<=n;i++)
{
        if(a[i]+b[i]+c[i]>1)sm++;                 
}
    cout<<sm;
system("pause");
return 0;    
}
