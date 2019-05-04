#include<iostream>

using namespace std;

int main()

{int i,n,s,a[1111],b=0,d,f;


cin>>n>>s;


for(i=1;i<=n;i++)


{cin>>a[i];}


for(i=1;i<=n;i++)
  {
        if(a[i]>s)a[i]=0;
     //     if(a[i]!=0&&a[i]>-99999)a[i]=0;   
   //          for(d=1;d<=n;d++)
     //        {
                 
       //          b=b+a[i];
                 
//             }
  }
  
  cout<<a[i]<<" ";
  
  
  system("pause");
  return 0;
}
