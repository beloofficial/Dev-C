#include<iostream>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
    long long int i,n,a[95000],j,k,b[95000],c=0;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];}
  cin>>k;
 for(j=1;j<=k;j++)
 {cin>>b[j];}
    for(i=1;i<=n;i++)
    {
                     for(j=1;j<=k;j++)
                     {
                        if(i==b[j]&&b[j]!=-1){c++;b[j]=-1;}
                                    
                     }
                     if(a[i]>=c){cout<<"no"<<endl;c=0;}
                     else {cout<<"yes"<<endl;c=0;}
}
//system("pause");
return 0;    
}
