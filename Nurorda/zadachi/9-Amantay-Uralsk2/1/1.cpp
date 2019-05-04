#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
int main()
{freopen("1.in","r",stdin);
freopen("1.out","w",stdout);
    long long int i,a[111111],b[111111],n,m,c[20020],j,s=0,h=0;
cin>>m>>n;
for(i=1;i<=n;i++)
{cin>>a[i]>>b[i];}
sort(a+1,a+n+1);
sort(b+1,b+n+1);
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++){
                 if(a[i]==a[j]){s++;}
                 if(a[i]==b[j]){s++;}
                 }
                 
                   
                       if(s>2)c[i]=a[i];s=0;
                       

}
for(i=1;i<=n;i++)
{
                 if(c[i]!=c[i+1])
                 h++;
}
cout<<h<<endl;
for(i=1;i<=n;i++)
{
                 if(c[i]!=c[i+1])
                 cout<<c[i]<<endl;
}

//system("pause");
return 0;    
}
