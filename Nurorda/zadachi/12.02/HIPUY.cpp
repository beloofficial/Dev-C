#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
int main()
{freopen("5.in","r",stdin);
freopen("5.out","w",stdout);
    
    int i,n,a[111111],k,j=1,p=1,q,l=0;
cin>>n;
for(i=1;i<=n;i++)
{
                 cin>>k;
                        if(k==0)         
                        {cin>>q;
                        a[p]=q;p++;
                        }              
                        else l++;
                                                                    
                             
                 
                 
                 
                 
}sort(a+1,a+p+1);
for(j=1;j<=l;j++)
{cout<<a[p]<<endl;p--;}
//system("pause");
return 0;    
}
