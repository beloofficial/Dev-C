#include <iostream>
#include <string>

using namespace std;

string s,t,d;
int a[10000],mas=0,max1=0,max2=0,b[10000],c[10000],i,j,k;

int main(){
 cin >>s>>t>>d;
      mas=s.size();
      max1=t.size();
      max2=d.size();
     if(mas>max1&&mas>max2)cout<<s;
     else if(max1>mas&&max1>max2)cout<<t;
     else if(max2>mas&&max2>max1)cout<<d;
     else if(mas==max1)
     { for ( i=0;i<s.size();i++)
 {//0-48    9-57
 a[i]=s[i]-48;
 }
 for ( i=0;i<s.size();i++)
     
     
     
      for (int j=0;j<t.size();j++)
 {//0-48    9-57
 b[j]=t[j]-48;
 }
 for ( j=0;j<t.size();j++)
   
    for( i=0;i<s.size();i++) 
    {
            if(a[1]>b[1])cout<<a[i];
          else cout<<b[i];  }}
          //---------------------------------------
         else if(mas==max2)
              { for ( i=0;i<s.size();i++)
 {//0-48    9-57
 a[i]=s[i]-48;
 }
 for ( i=0;i<s.size();i++)
    
     
     
      for (int k=0;k<d.size();k++)
 {//0-48    9-57
 c[k]=d[k]-48;
 }
 for ( k=0;k<d.size();k++)
   
    for( i=0;i<s.size();i++) 
    {
            if(a[0]>c[0])cout<<a[i];
          else cout<<c[i];  }}
         //----------------------------------
              else if(max1==max2)
                {for (int j=0;j<t.size();j++)
 {//0-48    9-57
 b[j]=t[j]-48;
 }
 for ( j=0;j<t.size();j++)
    
     for (int k=0;k<d.size();k++)
 {//0-48    9-57
 c[k]=d[k]-48;
 }
 for ( k=0;k<d.size();k++){
     cout<<c[k]<<" ";}
    for( i=0;i<s.size();i++) 
    {
            if(b[0]>c[0])cout<<b[i];
          else cout<<c[i];  }}
          
          
          
          
          
 system ("pause");
 return 0;   
}
