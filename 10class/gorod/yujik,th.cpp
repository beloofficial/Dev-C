#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,x2,y2,x3,y3,x[1111],y[1111],x1[1111],y1[1111],sum=0;
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>x[i]>>y[i]>>x1[i]>>y1[i];
}
cin>>x2>>y2>>x3>>y3;
for(int i=1;i<=n;i++)
{
    if(x[i]>=x2&&x[i]<=x3&&y[i]>=y2&&y[i]<=y3)
    {
        if(x1[i]>=x3&&y1[i]>=y3)
        {
            sum+=(x3-x[i])*(y3-y[i]);
        }
            if(x1[i]<=x3&&y1[i]<=y3)
        {
            sum+=(x1[i]-x[i])*(y1[i]-y[i]);
        }
    }
    if(x1[i]>=x2&&x1[i]<=x3&&y1[i]>=y2&&y1[i]<=y3)
    {
        if(x[i]<=x2&&y[i]<=y2)
        {
            sum+=(x1[i]-x2)*(y1[i]-y2);
        }
    }
    if(x[i]<=x2&&y[i]<=y2&&x1[i]>=x3&&y1[i]>=y3)
    {
        sum+=(x3-x2)*(y3-y2);
    }
}
cout<<sum;
return 0;
}
