#include<iostream>
using namespace std;
int main()
{
/*6
10 7 10
3 6 11
8 4 10
10 1 11
7 3 13
7 2 13
*//*
6
10 7 10
3 6 1
8 4 1
10 1 3
7 3 6
7 2 7*/
   long long  int i,n,a[11111],b[11111],c[11111],sum=0,d[11111],k=1,q=0;
cin>>n;
for(i=1;i<=n;i++)
{
                 cin>>a[i]>>b[i]>>c[i];
}
for(i=1;i<=n;i++)
{
                 while(1)
                 {
                         if(c[i]>=0){sum++;d[sum]=i;break;}
                         else i++;
                         if(i==n)break;
                 }
                 k=1;q=0;
   for(int j=a[i];j>=1;j--)
   {       if(c[i+k]>=0)
    {
       c[i+k]=c[i+k]-j;cout<<c[i+k]<<" ";
          
       if(c[i+k]<0)
       {
                    q=b[i+k];
                  for(int j=c[i+k+1];j<=n;j++)
                  {
                        c[j]=c[j]-q;           
                  }  
       }         
    }
    k++;
   }
   cout<<endl;
  
}    
cout<<sum<<endl;
for(i=1;i<=sum;i++)
cout<<d[i]<<" ";
system("pause");
return 0;    
}
