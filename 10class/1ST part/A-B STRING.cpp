#include<iostream>
using namespace std;
int main()
{int q=0,z=0,i;
	string s,k;
	cin>>s>>k;
	for(i=0;i<s.size();i++)
	{
	s[i]=s[i];k[i]=k[i];cout<<s[i]-48<<" ";
	}
	
	/*if(s.size()>k.size())
	for(i=s.size();i>0;i--)
	{
			s[i]=s[i]-k[0];
			if(s[i]>=0)cout<<s[i];
			else
			{
				while(q==0)
				{cout<<0;
					z++;
					s[z]--;
					if(s[z]>=0)q=1;
					else s[z]=10-s[z]*-1;	
				}
				q=0;
			} 
	}
	for(i=0;i<s.size();i++)
	{
	cout<<s[i];}
	cout<<endl;
	cout<<s[s.size()];*/
	return 0;
}
