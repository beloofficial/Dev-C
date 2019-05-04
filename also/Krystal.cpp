#include<iostream>
using namespace std;
int main()
{int i,n,b,c,d,k=0,m=0,l[1111];
char a[111111];
cin>>n;
for(i=1;i<=n;i++)
{
   cin>>a[i];
   if(a[i]=='A'){
                 cin>>b;
                }
   else 
   {
        cin>>c>>d;
     for(c=c;c<=d;c++)
     {
       if(c!=b||c!=d)  k++;
       else {
            k=k;
            if(k>m){m=k;k=0;}
            else {m=m;k=0;}
            }
                 l[i]=m;
     }
           
   }
} 
for(i=1;i<=n;i++)
cout<<l[i]<<endl;
system("pause");
return 0;    
}
