#include<iostream>
#include<cstdio>
using namespace std;
int a[999999],s[999999],k=0;
void ret(int l,int r,int c)
{s[0]=0;
     if(c!=0)
     {
             for(int ll=l;ll<=r;ll++)
             {
                     a[ll]=c;        
             }
             s[k]=c;k++;
     }
     else 
     {
          for(int ll=l;ll<=r;ll++)
               {a[ll]=s[k-1];}
               k--;
     }
}
int main()
{//freopen("1.in","r",stdin);
//freopen("1.out","w",stdout);   
    long long int n,m,l,r,c,ll;
cin>>m>>n;
for(int i=1;i<=n;i++)
{
        cin>>l>>r>>c;
        ret(l,r,c);
}
for(int i=1;i<=m;i++)
  cout<<a[i]<<" ";  

system("pause");
return 0;
}
