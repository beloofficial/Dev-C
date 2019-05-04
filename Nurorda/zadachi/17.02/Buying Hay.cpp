#include<iostream>
using namespace std;
bool d[55000]={1};
long long int a[55000],b[55000],e[55000],t=1;
int main()
{int h,n;
cin>>h;
cin>>n;
  for(int i=1;i<=n;i++)
  {
        cin>>a[i]>>b[i];
        for(int i=1;i<=b[i];i++)
        e[t]=a[i];t++;}
       d[0]=1;
   for(int i=1;i<=n;i++)
   {
    for(int j=h;j>=1;j--)
    {
            if(j>=e[i]&&d[j-e[i]]==true)
                        d[j]=1;   
    }
   }
    for(int i=h;i>=1;i--)
    if(d[i]==1){cout<<i<<endl;break;}
//system("pause");
return 0;    
}
//40 6
//7 13 17 19 29 31
