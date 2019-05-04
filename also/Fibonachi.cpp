#include<iostream>
using namespace std;
int main()
{//freopen("input.txt","r",stdin);
   //  freopen("output.txt","w",stdout);
    int i,n,s=0,j,a[11111],k=0;
cin>>n;
for(i=1;i<=2000;i++)
 {
     a[0]=0;a[1]=1;a[i]=a[i-1]+a[i-2];            
 }/*
    for(i=1;i<=2000;i++)
{
         if(a[i]==n)
    {
                    s=1;   
          for(i=1;i<=2000;i++)
          {
         if(a[i]!=n)k++;
         else cout<<s<<endl<<k+1;
         }
    }
}
          if(s==0)cout<<0<<" ";*/
          for(i=1;i<=2000;i++)
          cout<<a[i];
          
system("pause");
return 0;    
}
/////   0 1 1 2 3 5 8 13 21 
//13
