#include<iostream>
using namespace std;
bool d[55000]={1};
long long int a[55000];
int main()
{int h,n,k=0;
cin>>h;
cin>>n;
  for(int i=1;i<=n;i++)
  {
        cin>>a[i];
  }
       d[0]=1;
   for(int i=1;i<=n;i++)
   {
    for(int j=h;j>=1;j--)
    {
            if(j>=a[i])
                        {k++;}   
    }
   }
    for(int i=h;i>=1;i--)
    if(d[i]==1){cout<<d[i]<<" ";}
    cout<<endl;
    cout<<k<<" ";
system("pause");
return 0;    
}
//40 6
//7 13 17 19 29 31

