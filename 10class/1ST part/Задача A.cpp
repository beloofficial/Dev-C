#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{freopen("A.in","r",stdin);
freopen("A.out","w",stdout);
    long long int k=0,sum=0,i;
    string s;
cin>>s;
for(i=0;i<s.size();i++)
{
       if(s[i]>64&&s[i]<91)k++;
       if(k>0&&s[i]>96&&s[i]<123) sum++;                                     
}    
cout<<sum;
//system("pause");
return 0;    
}
