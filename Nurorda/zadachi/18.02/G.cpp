#include<iostream>
#include<cstdio>
using namespace std;
int main()
{//freopen("7.in","r",stdin);
//freopen("7.out","w",stdout);
   long long int i,n,a[1111],b[1111],m,l,r,s=0;
char q;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];b[i]=a[i];}
cin>>m;               
for(int j=1;j<=m;j++)
{cin>>q>>l>>r;
           if(q=='S')
          {
          a[l]=r;
          }
          else if(q=='Q')
          {
               for(l=l;l<=r;l++)
               {
                s=s+a[l];                 
               }     
               cout<<s<<endl;s=0;
          }
          else if(q=='R')
          {int z=l-1;
           for(i=1;i<=n;i++)
           {b[i]=a[i];}
               while(z!=r)
               {a[l]=b[r];
                              r--;l++;
               }    
          }
}         
system("pause");
return 0;    
}

