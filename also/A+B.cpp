#include<iostream>
using namespace std;
int main()
{string a,b;
int e[11111],i,r[11111],m;
cin>>a>>b;
        for ( i=0;i<a.size();i++)
 {//0-48    9-57
 e[i]=a[i];
 }

             
            for ( m=0;m<b.size();m++)
 {//0-48    9-57
        r[m]=b[m];
 }
for(i=a.size();i>-1;i--)
      {e[i]=a[i];}
     for(m=b.size();m>-1;m--) 
      {r[m]=b[m];}
if(a[i]>=b[m])
  {
        for ( i=0;i<a.size();i++)
        {
            if(a[i]+b[m]<10)a[i]+=b[m];
            else {a[i]=(a[i]+b[m])%10;}
            
            
            
            
        }         
  }
 for ( i=0;i<a.size();i++)
{cout<<a[i];}


    system("pause");
return 0;    
}

