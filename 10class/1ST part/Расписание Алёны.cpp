#include<iostream>
using namespace std;
int main()
{int n,a[111111],k=0,s=0;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>a[i];}    
    for(int i=1;i<=n;i++)
    {
          if(a[i]!=0)k++;
          if(a[i]==0&&a[i-1]==1&&a[i+1]==1)k++; 
    }
    cout<<k;
system("pause");
return 0;    
}
