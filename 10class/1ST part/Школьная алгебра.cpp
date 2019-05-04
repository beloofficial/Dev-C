#include<iostream>
#include<cstdio>
using namespace std;
int main()
{//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout);
    int a,b,c;
cin>>a>>b>>c;
    if(a!=0)cout<<a;
    if(b!=0)
    {
          if(a!=0&&b!=0&&b>0)cout<<"+";
     else if(b!=0&&b<0) cout<<"-";
     if(b>1)cout<<b;
     else if(b<-1)cout<<b*-1;
          if(b==1)cout<<"x";
          else if(b==-1)cout<<"x";
          else cout<<"x";     
    }
     if(c!=0)
    {
          if(a!=0&&b!=0&&c!=0&&c>0)cout<<"+";
     else if(c!=0&&c<0) cout<<"-";
     if(c>1)cout<<c;
     else if(c<-1)cout<<c*-1;
          if(c==1)cout<<"y";
          else if(c==-1)cout<<"y";
          else cout<<"y";     
    }
    if(a==0&&b==0&&c==0)cout<<0;
system("pause");
return 0;    
}
