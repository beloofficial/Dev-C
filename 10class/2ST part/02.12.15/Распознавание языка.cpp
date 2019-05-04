#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int a,b,c,k,l,a1,b1,n,q;
int main()
{
string s;
cin>>n;
for(int j=1;j<=n;j++)
{

cin>>s;
for(int i=0;i<s.size();i++)
{
	if(s[i]=='0')
	{
		a++;if(a1!=0){
			q++;
		}
	}
	else if(s[i]=='1')
	{
		b++;a1++;if(b1!=0||a==0){
			q++;
		}
	}
	else if(s[i]=='2')
	{
		c++;a1++;b1++;
	}
}
if(q==0)
{

if(a==c&&c==b)
cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
else cout<<"NO"<<endl;
 a=0;b=0;c=0;k=0;l=0;a1=0;b1=0;q=0;
}
return 0;
}
