#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int b[111],nol,d,t,ch,p,od,q=0;
int main()
{
int n,a[6];
for(int i=1;i<=5;i++)
{
	cin>>a[i];b[a[i]]++;
}
sort(a+1,a+5+1);
for(int i=1;i<=4;i++)
{
	if(a[i]+1!=a[i+1])q++;
}
for(int i=1;i<=13;i++)
{
	if(b[i]==0)nol++;
	else if(b[i]==1)od++;
	else if(b[i]==2)d++;
	else if(b[i]==3)t++;
	else if(b[i]==4)ch++;
	else if(b[i]==5)p++;
}
if(q==0)cout<<"Straight";
else 
{

if(p==1)cout<<"Impossible";
else if(ch==1)cout<<"Four of a Kind";
else if(t==1&&d==1)cout<<"Full House";
else if(t==1&&od==2)cout<<"Three of a Kind";
else if(d==2&&od==1)cout<<"Two Pairs";
else if(d==1&&od==3)cout<<"One Pair";
else cout<<"Nothing";
}
return 0;
}
