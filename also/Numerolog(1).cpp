#include<iostream>
using namespace std;
int main()
{ int a[111111],b[111111],i,k=0,t=1; 
    string s;
cin>>s;
//while(s.size()==1)
{
 for(i=0;i<s.size();i++)
 {
  if(s[i]>0)k++;                       
 }              
   for(i=1;i<=k/2;i++)
   {
     t=t*10;
   }   
   for(i=1;i<=k/2;i++)
   a[i]=s[i]/t;
   b[i]=s[i]%t;                
}
cout<<a[i]<<" "<<b[i];
system("pause");
return 0;
}
