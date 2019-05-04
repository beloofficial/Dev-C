#include<iostream>
#include<string>
using namespace std;
int main()
{int k,j,i,a[1111],b[1111],e=1;
string s,p; 
cin>>s;
for(i=0;i<s.size();i++)
{a[i]=s[i]-48;}
sort(a+0,a+s.size()+0);
k=a[0];
j=a[1];
for(i=0;i<s.size();i++)
{                      
                       if(s[i]-48!=k){cout<<s[i];}
else 
{
     k=-1;

}
if(s[i]-48==j&&s[i]-48!=k) j=-1;


}
system("pause");
return 0;
}
