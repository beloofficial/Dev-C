#include<iostream>
using namespace std;
int main()
{int n,k,a[111111],sm=0;
cin>>n>>k;
for(int i=1;i<=n;i++)
{cin>>a[i];}
  for(int i=1;i<=n;i++)
  {
          if(i<=k&&a[i]>0)sm++;
          else if(a[i]==a[k]&&a[i]>0)sm++;        
          
  }
  cout<<sm;
system("pause");
return 0;    
}
