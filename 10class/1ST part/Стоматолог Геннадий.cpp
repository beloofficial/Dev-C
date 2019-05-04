#include<iostream>
using namespace std;
int main()
{long long int a[11111],b[11111],c[11111],n,m=1,k=0,q,d[1111],e[11111],sum=0,h;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>a[i]>>b[i]>>c[i];e[i]=i;}
for(int i=1;i<=n;i++)
{
        while(1){if(e[i]==-1){i++;}
      else break;}
m=i+1;q=i;sum++;d[sum]=i;

      for(int j=a[q];j>=1;j--)
      {
              c[m]=c[m]-j;
              c[m]=c[m]-k;     
              if(c[m]<0)  {k=k+b[m]; h=m;e[m]=-1;cout<<m<<" ";}
              m++;
               
      }  
        k=0;
}    

/*cout<<sum<<endl;
for(int i=1;i<=sum;i++)
cout<<d[i]<<" ";*/
system("pause");
return 0;    
}
