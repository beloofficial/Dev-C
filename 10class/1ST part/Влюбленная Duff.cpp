#include<iostream>
using namespace std;
int main()
{int n,i,k=0,s=0;
cin>>n;
    for(i=n;i>=1;i--)
    {
        if(n%i==0)
        {
              for(int j=2;j<=i;j++)
              {
                 s=j*j;if(i%s==0){k++;break;}   
              }           
         
        if(k==0){cout<<i;break;}k=0;}
    }
system("pause");
return 0;    
}
