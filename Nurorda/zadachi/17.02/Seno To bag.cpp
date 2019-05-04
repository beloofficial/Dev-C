#include<iostream>
using namespace std;
bool d[11111]={1};
int n,h,a[1111];
int main()
{
cin>>n;
  for(int i=1;i<=n;i++)
  {
        cin>>a[i];
  }
       cin>>h;
       d[0]=1;
   for(int i=1;i<=n;i++)
   {
    for(int j=h;j>=1;j--)
    {
            if(j>=a[i]&&d[j-a[i]]==true)
                        d[j]=1;   
    }
   }
    for(int i=h;i>=1;i--)
    {if(d[i]==1)cout<<d[i];break;}
system("pause");
return 0;    
}
