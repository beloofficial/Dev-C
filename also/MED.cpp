#include<iostream>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
   long long int n,v,k,i,s=0;
cin>>n>>v>>k;
if(v<=0)cout<<"NO"<<" "<<0;

else {
for(i=1;i<=n;i++)
    {s=s+v;if(v>0){if(i!=n){v=v-k;if(v>0)v=v;else v=0;}else v=v;}//100+80+60+40+20
    else v=0;}
     if(v<=0)cout<<"NO"<<" "<<s;
     else    cout<<"YES"<<" "<<s;} 
//system("pause");
return 0;    
}
