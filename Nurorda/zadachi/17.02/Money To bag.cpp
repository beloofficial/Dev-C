#include<iostream>
using namespace std;
int main()
{int s,k,f[1111],a[1111],w;
const int INF=2e9;
cin>>s>>k;
      for(int i=1;i<=k;i++)
      {
        cin>>a[i];
      }
      for(int m=1;m<=s;m++)
      {
      f[m]=INF;         
                        for(int i=1;i<=k;i++)
                        {
                          if(m>=a[i]&&f[m-a[i]]+1<f[m])
                             f[m]=f[m-a[i]]+1;    
                             }
                        }
                        cout<<f[s]<<" ";    
system("pause");
return 0;    
}
