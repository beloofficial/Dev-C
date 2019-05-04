#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int d[1111],m[1111],h[1111],mm[1111],i,n;
char e,g,f;
cin>>n;
for(i=1;i<=n;i++)
{cin>>d[i]>>e>>m[i]>>g>>h[i]>>f>>mm[i];}
for(i=1;i<=n;i++)
{
  if(m[i]>m[i+1]||m[i]==m[i+1]&&d[i]<d[i+1]){swap(m[i],m[i+1]);swap(d[i],d[i+1]);swap(h[i],h[i+1]);swap(mm[i],mm[i+1]);  }               
                 
}for(i=1;i<=n+1;i++)
cout<<m[i]<<" "<<d[i]<<" "<<h[i]<<" "<<mm[i]<<endl;

system("pause");
return 0;    
}
