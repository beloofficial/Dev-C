#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("1.in","r",stdin);
freopen("1.out","w",stdout);
long long int n,a[111111],b[111111],q,mx=0,mn,qq;
cin>>n;  
//-------------------------------------------------------------------
for(int i=1;i<=n*2;i++)
{cin>>a[i];b[i]=a[i];}
mn=1;
mx=n;
int mxa=n;
int mna=n;
int mxx=n;
int mnn=n;
q=n*2;
qq=n*2-1;
sort(a+2,a+n*2+1);
sort(b+2,b+n*2+1);
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
for(int i=n*2-1;i>=n+1;i--)
{
                     for(int j=n*2-2;j>=2;j--)
                     {
                                         if(a[1]+a[n*2]>=a[i]+a[j]&&a[i]!=-1&&a[j]!=-1){mx--;a[i]=-1;a[j]=-1;sort(a+2,a+n*2);break;}
                                                                                                     
                     }
          if(mxa!=mx)mxa--;
          else {a[i]=-1;a[i-1]=-1;sort(a+2,a+n*2);}           
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
for(int i=3;i<=n*2;i++)
{
                     for(int j=4;j<=n*2;j++)
                     {
                                         if(b[1]+b[2]<b[i]+b[j]&&b[i]!=-1&&b[j]!=-1){mn++;b[i]=-1;b[j]=-1;sort(b+3,b+n*2+1);break;}
                                                                                                     
                     }          
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------

cout<<mx<<" ";
cout<<mn;
//system("pause");
return 0;    
}
