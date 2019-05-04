#include<iostream>
#include<string>
using namespace std;
int main()
{string a,b;
int e[1111],r[1111],c[1111],i;
cin>>a>>b;
        for (int i=0;i<a.size();i++)
 {//0-48    9-57
 e[i]=a[i]-48;
 }

             
            for (int i=0;i<b.size();i++)
 {//0-48    9-57
        r[i]=b[i]-48;
 }

    
    if(a>b)
    
      {
           for (int i=0;i<b.size();i++)
        {
          
            a[i]=(a[i]+b[i])%10;
            a[i+1]=(a[i]+b[i])/10;
            }}
     
   for (int i=0;i<a.size();i++)
   {cout<<a[i]-48<<" ";}
return 0;    

}
