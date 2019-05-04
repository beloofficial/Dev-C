#include<stack>
#include<string>
#include<iostream>
#include<cstdio>
using namespace std;
stack<char> s;
int t[1111];
int main()
{int k=0,i,j,z;
string q;
cin>>z;
for(j=1;j<=z;j++)
{
cin>>q;	
for( i=0;i<q.size();i++)
{
	if(q[i]=='(') {s.push(q[i]);}
	else if(q[i]==')'&&s.size()==0){k=2;break;} 
	else 
	{
		if(s.top()=='('&&q[i]==')'&&s.size()!=0){s.pop();}
		else {k++;break;}
	}
}
if(k!=2)
{

if(k==0&&s.size()==0)t[j]=1;

}
k=0;
for( i=0;i<q.size();i++)
{if(s.size()!=0)s.pop();
else break;}
}

for(int j=1;j<=z;j++)
	{
	if(t[j]==0)cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}
return 0;
}
