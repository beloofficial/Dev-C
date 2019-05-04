#include<iostream>
#include<string>
using namespace std;
int main()
{int i,n,j,h,g,a[11111],b[111111],c=0;
string s,k;
cin>>n;
for(i=1;i<=n;i++)
{cin>>n>>k;}
 for(g=0;g<s.size();g++)
 {
   a[g]=s[g]-48;                     
 }  
   for(g=0;g<k.size();g++)
   {
     b[g]=k[g]-48;                       
   }
        for(g=0;g<s.size();g++)
        {
                               for(j=g+1;j<s.size();j++)
                               {
                                 if(a[g]==a[j])a[g]=-1;
                                 if(b[g]==b[j])b[j]=-1; 
                               }
        }
        sort(a+0,a+s.size()+0);
        sort(b+0,b+k.size()+0);
        for(g=0;g<s.size();g++)
        {
        if(a[g]==b[g]&&a[g]!=-1&&b[g]!=-1)cout<<c++;
        else c=0;                       
                               
        }
        cout<<c;
system("pause");
return 0;    
}
