#include<iostream>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
    int a,b,c,d,x1,y1,x2,y2;
cin>>a>>b>>c>>d>>x1>>y1;
if(a==c)
         {
             y2=y1;
             if(x1>a)x2=a-(x1-a);
             else x2=a+a-x1;
         
         
         }
    else if(b==d)
    {x2=x1;
         if(y1>b)y2=b-(y1-b);
         else y2=b+b-y1;
         
         
         
         
    }
    cout<<x2<<" "<<y2;
//system("pause");
return 0;    
}
