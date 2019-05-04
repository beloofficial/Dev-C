#include<iostream>
using namespace std;
int main()
{int i,n,a[11111],m=0,b[111111],s=1,k=0;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>a[i];                 
}
    for(i=1;i<=n;i++)
    {
                    b[i]=a[i];               
    }
    sort(b+1,b+n+1);
                    for(i=1;i<=n;i++)
                    {
                                     if(a[i]!=b[s])m=i;
                                     else m=m;
                                     while(a[i]==b[s])
                                     {
                                             k=k+a[i]*m;         
                                     }
                     }for(i=1;i<=n;i++)
                    { cout<<k<<" "<<a[i]<<" "<<b[s];}
system("pause");
return 0;    
}
