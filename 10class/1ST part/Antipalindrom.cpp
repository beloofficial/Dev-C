#include<iostream>
#include<string>
using namespace std;
int q,a,b,su=-9999999;
int main()
{
    string s;
    cin>>s;
    for(int i=1;i<=s.size();i++)
    {int p=i+1;
        for(int l=p;l<=s.size();l++)
        {                                            
             for(int j=i;j<=l;j++)
             {
                              for(int k=l;k>=i;k--)
                              {
                                      if(s[j]!=s[k])q++;
                                      j++;
                                      cout<<s[k]<<"ppp";                        
                              }
                              cout<<s[j]<<"qqq"; 
             }
             if(q==s.size()&&q>su){su=q;a=i;b=l;cout<<a<<" "<<b;}
        }                        
    }
    for(int i=a;i<=b;i++)
   {// cout<<s[i];}
}
system("pause");
return 0;    
}
