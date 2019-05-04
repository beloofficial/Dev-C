#include<iostream>
#include<fstream>
#include<string>
using namespace std;
long long int sz,ans=0,q=-1,sum=0,z;
string s,s1;
int main()
{
cin>>s>>s1;
sz=s.size()-1;
for(int i=0;i<s1.size();i++)
{
	
	for(int j=i;j<=i+sz;j++)
	{
		q++;
		z=(s[q])-(s1[j]);
		if(z<0)z=z*-1;
		sum+=z;
	}
	q=-1;
	if(i+sz==s1.size()-1){
	break;}	
}
cout<<sum;
return 0;
}

