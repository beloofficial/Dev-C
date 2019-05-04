#include<iostream>
#include<string>
using namespace std;
string s[55];
int n,a[1000];
int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>s[i];
if(s[i].length()>6)a[i]=1;
else if (s[i][0]!='A'&&s[i][0]!='B'&&s[i][0]!='C'&&s[i][0]!='E'&&s[i][0]!='H'&&s[i][0]!='K'&&s[i][0]!='M'&&s[i][0]!='O'&&s[i][0]!='P'&&s[i][0]!='T'&&s[i][0]!='X'&&s[i][0]!='Y')a[i]=1;
else if(s[i][4]!='A'&&s[i][4]!='B'&&s[i][4]!='C'&&s[i][4]!='E'&&s[i][4]!='H'&&s[i][4]!='K'&&s[i][4]!='M'&&s[i][4]!='O'&&s[i][4]!='P'&&s[i][4]!='T'&&s[i][4]!='X'&&s[i][4]!='Y')a[i]=1;
else if(s[i][5]!='A'&&s[i][5]!='B'&&s[i][5]!='C'&&s[i][5]!='E'&&s[i][5]!='H'&&s[i][5]!='K'&&s[i][5]!='M'&&s[i][5]!='O'&&s[i][5]!='P'&&s[i][5]!='T'&&s[i][5]!='X'&&s[i][5]!='Y')a[i]=1;
else if(int (s[i][1])>57||int(s[i][1])<48)a[i]=1;
else if(int (s[i][2])>57||int(s[i][2])<48)a[i]=1;
else if(int (s[i][3])>57||int(s[i][3])<48)a[i]=1;
}
for(int i=1;i<=n;i++)
{
if(a[i]==1)cout<<"No";
else cout<<"Yes";
cout<<endl;
}
return 0;
}
