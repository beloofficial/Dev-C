#include<iostream>
#include<algorithm>
using namespace std;
int main()
{ int k,n,a[1111],sm=0,sum=0,i,m=0;
cin>>k;
       for(i=1;i<=12;i++)
       {
                  cin>>a[i];              
       }
                  sort(a+1,a+12+1);
       for(i=12;i>=1;i--)
       {
              
              if(sm<k)  {sm=sm+a[i]; sum++;}
              else m=1;              
       }           
       if(m==1)
       cout<<sum;
       else cout<<"-1";
system("pause");
return 0;    
}
