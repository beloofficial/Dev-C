#include<iostream>
using namespace std;
int main()
{long long int n,a[111111],b[111111],k,sum=0,i;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>a[i]>>b[i];                 
}
k=b[1];   
for(i=2;i<=n;i++)
{
       if(k<b[i])b[i]=k;
       else k=b[i];   
} 
    for(i=1;i<=n;i++)
    {
        sum=sum+a[i]*b[i];                         
    }
    cout<<sum;
system("pause");
return 0;    
}
