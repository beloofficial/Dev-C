#include<iostream>
using namespace std;
int main()
{
    int q=0,a[111],n,b,c[111],d;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
            cin>>a[i];
    }
    cin>>b;
    for(int i=1;i<=b;i++)
    {
        cin>>c[i];}
     for(int e=1;e<=b;e++){
      for(int j=1;j<=b;j++) {
          if(c[e]==a[j]) q++;
}
if (q > 0)  cout<<"YES"<<" ";
else cout<<"NO"<<" ";
q=0;
}
    system("pause");
    return 0;    
}
