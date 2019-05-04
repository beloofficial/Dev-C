#include<iostream>
#include<cmath>
using namespace std;
int main()
{ freopen("crystal.in","r",stdin); 
freopen("crystal.out","w",stdout); 
   long long int i,n,b,c,d,k=0,m=0,l[1111],q=0,z,x,h;
char a[1111];
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
        if(b!=q)q=b;
        else q=d+1;
        cout<<q<<" "<<b<<endl;
        if(q>=c&&q<=d)
        {z=abs(q-c);
        x=abs(d-q);
                   {
                    if(z>x)cout<<z<<endl;         
                        else if(z<=x)cout<<x<<endl;
                        else cout<<z+x<<endl;                     
         }          }
        else {z=d-c;cout<<z+1;}
        } 
        
}
//system("pause");
return 0;    
}
