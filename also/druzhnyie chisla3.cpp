#include<iostream>
#include<string>
using namespace std;
int main()
{int l,a[11111],b[111111],j=0,k,i,v,m=0,n=0,ii,kk;
string s,s1;
cin>>l;
//------------------------------------------------------------------------
for(v=1;v<=l;v++)
{
         cin>>s>>s1;
         m+=s.size();
  for( i=m-s.size();i<m;i++)
  {a[i]=s[i]-48;}
  n+=s1.size();
  for( k=n-s1.size();k<n;k++)
  {b[k]=s1[k]-48;}
} 
//*********************************************************************
for(i=0;i<s.size();i++)
{
   for(ii=i+1;ii<s.size();ii++)
   {
              if(a[i]==a[ii])a[i]=-1;
   }
}
for(k=0;k<s.size();k++)
{
   for(kk=k+1;k<s.size();kk++)
   {
              if(b[k]==b[kk])b[k]=-1;
   }
}


//------------------------------------------------------------------------
   for(v=1;v<=l;v++)
   {                 
       for(i=0;i<m;i++)
       {
           for( k=0;k<n;k++)
           {
                if(a[i]==b[k]&&a[i]!=-1&&b[k]!=-1)  {a[i]=-1;b[k]=-1;j++;}
           }
       
       }
   }
    cout<<j;
//*****************************************************************************    
system("pause");
return 0;    
}
