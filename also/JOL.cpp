#include<iostream>
#include<string>
using namespace std;
int main()
{int i,n,a[1111],k=0,q;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
         a[i]=s[i]-48     ;             
    }
      for(i=0;i<s.size();i++)
      {
          cout<<a[i]<<" ";                       
      }
      
      
         for(i=0;i<s.size();i++) {
         for(q=0;q<s.size();q++) {                        
                                 
             if(a[i]+a[i+1]==a[i+1]+a[i+2])k++;                    
                                 
                                 }
                                 } 
    cout<<k;
system("pause");
return 0;     
}
