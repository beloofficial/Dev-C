#include<iostream>
using namespace std;
int main()
{int i,n,a[1111],b,c,d,e,f;
cin>>n>>e;
for(i=1;i<=n;i++)
{cin>>a[i];}
//while(f<e)
//{
for(i=1;i<=n;i++)
       {if(a[i]>e) a[i]=0; cout<<a[i]<<" ";}
      for(i=1;i<=n;i++)
      {
                
           if(a[i]!=0) cout<<a[i];
                
      }
          
//}

    
system("pause");
return 0;    
}
