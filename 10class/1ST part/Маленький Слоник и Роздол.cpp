#include<iostream>

using namespace std;
int main()
{int n,a[11111],b[11111];
cin>>n;
for(int i=1;i<=n;i++)
{cin>>a[i];b[i]=a[i];}
  sort(b+1,b+n+1);
  if(b[1]==b[2])cout<<"Still Rozdil";
  else {
        for(int i=1;i<=n;i++)
        {
        if(a[i]==b[1]){cout<<i;break;}        
        }
       }  

return 0;    
}
