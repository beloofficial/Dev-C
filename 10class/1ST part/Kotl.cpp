#include<iostream>
#include<cstdio>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
    int k,m,n,q,t,y,z,sum=0;
cin>>k>>m>>n;
if(k>=n)cout<<m*2;
else {
      if(k%2==0)
                {
                q=k/2;
                if(n%q==0)cout<<m*(n/q);
                else cout<<m*(n/q+1);
                }
      else {
            t=k/2;
            y=k/2+1;z=t;
                    while(n>0)
                    {  
                       n=n-z; 
                       sum=sum+m;
                       if(z==t)z=y;
                       else z=t;         
                    }
                    cout<<sum;
           
           }
                  
     
     }
//system("pause");
return 0;    
}
