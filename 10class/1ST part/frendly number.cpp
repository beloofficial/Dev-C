#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
   freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
long long int n,i,sm=0,sum=0,a[11111],q=0;
string s,ss;
cin>>n;

for(i=1;i<=n;i++)
{                                         
                 cin>>s>>ss;
                 for(int j=0;j<s.size();j++)
                 {
                         for(int k=0;k<ss.size();k++)
                         {
                                 if(s[j]!=ss[k])  q++;
                                 else {q=0;break;}   
                         }        
                         if(q>0){sum++;break;}
                 }  
q=0;


     for(int j=0;j<ss.size();j++)
                 {
                         for(int k=0;k<s.size();k++)
                         {
                                 if(ss[j]!=s[k])  q++;
                                 else {q=0;break;}   
                         }        
                         if(q>0)sum++;
                 }   
     q=0;
if(sum==0)a[i]++;sum=0;

}
for(i=1;i<=n;i++)
{
if(a[i]!=0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
//system("pause");
return 0;    
}
