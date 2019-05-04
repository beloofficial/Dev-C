#include<iostream>
#include<cstdio>
using namespace std;
long long int n,a[1111],b[1111111],ans,mn=9999999,q,m=1,z;
string s;
int main()
{
	s[0]='A';
	s[1]='B';
	s[2]='C';
	s[3]='D';
	s[4]='E';
	s[5]='F';
	s[6]='G';
	s[7]='H';
	s[8]='I';
	s[9]='J';
	s[10]='K';
	s[11]='L';
	s[12]='M';
	s[13]='N';
	s[14]='O';
	s[15]='P';
	s[10]='Q';
	s[11]='R';
	s[12]='S';
	s[13]='T';
	s[14]='U';
	s[15]='V';
	s[10]='W';
	s[11]='X';
	s[12]='Y';
	s[13]='Z';
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
for(int i=1;i<=n;i++)
{
	for(int j=32;j>=2;j--)
	{int x=a[i];
		while(x!=0)
		{
			x/=j;ans++;
		}
		if(ans<=mn)mn=ans;
		else 
		{
			 z=j+1;break;
		}
		ans=0;
	}
	int t=a[i];
	while(t!=0)
	{
		b[m]=t%z;
		t/=z;
		m++;
	}m--;cout<<z<<" ";
		for(int i=m;i>=1;i--)
	{
			if(b[i]<10)cout<<b[i];
			else cout<<s[b[i]-10];
	}cout<<endl;
	m=1;ans=0;mn=9999999;
}

return 0;
}
