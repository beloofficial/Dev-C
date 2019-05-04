#include<iostream>
#include<string>
using namespace std;
int main()
{freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout); 
int i,k=0,j=0;
string s;
cin>>s;
    for(i=1;i<s.size();i+=2)
    {k=k+s[i]-48;}
     for(i=0;i<s.size();i+=2)
    {j=j+s[i]-48;}
    if((k-j)%11==0)cout<<"YES";
    else cout<<"NO";
    //system("pause");
return 0;    
}
