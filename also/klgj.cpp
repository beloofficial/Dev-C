#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j=0,l=0,a[11111];
    
    string s;
    
    cin>>s;
    for(i=0;i<s.size();i++)
    
    {
    if(a[i]==57)j++;
    if(a[i]=='p')l++;                       
    }
    cout<<j<<" "<<l;
    
    system("pause");
    return 0;
}
