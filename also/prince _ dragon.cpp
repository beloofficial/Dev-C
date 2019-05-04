#include<iostream>
using namespace std;
int main()
{//freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
long long int i,n,k,h,r,c=0;
cin>>k>>h>>r;
if(k>=h)cout<<1;
else if(k!=h&&k<=r)cout<<"NO";
else {   
          while(k<=h)
        {
          h=h-k+r;c++;         
        }
        cout<<c;
     }
     
system("pause");
return 0;    
}
