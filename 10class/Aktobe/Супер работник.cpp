#include<iostream>
#include<set>
#include<cstdio>
#include<queue>
using namespace std;
multiset<int>s;
queue<int>z;
int main()
{long long int n,i,m,l,k=1,x;
cin>>n;
for(i=1;i<=n;i++)
{
	cin>>m;
	if(m==1)
	{
		cin>>l;
		s.insert(l);z.push(l);
	}
	else if(m==2){cout<<*s.begin()<<endl;k++;}
	else if(m==0)
		{
			x=z.front();z.pop();	s.erase(s.find(x));
		}
	}
return 0;
}
