#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
deque<int >s;
int main()
{
long long int n,m,a[111111],l=0,k;
cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		s.push_front(a[i]);
	}
	k=n;
	for(int i=1;i<=n/2+1;i++)
	{
		if(s.front()+s.back()==m){cout<<s.back()<<" "<<s.front();l++;break;}
		else if(s.front()+s.back()>m){s.pop_front();}
		else {s.pop_back();}	
	}
	if(l==0)cout<<0<<" "<<0;
return 0;
}
