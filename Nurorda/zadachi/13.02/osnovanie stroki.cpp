#include<iostream>
#include<string>
#include<fstream>
using namespace std;
long long int k;
bool h[1111111];
void add(string s)
{   // freopen("input.txt","r",stdin);
  	//freopen("output.txt","w",stdout);
   
for(int i=0;i<s.size();i++)
{
               
                if(h[s[i]-65]==0){k++;h[s[i]-65]=1;}
}}
int main()
{
string s;
cin>>s;
add(s);
    cout<<k<<endl;
    system("pause");
return 0;    
}
