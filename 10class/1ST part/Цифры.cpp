   #include <iostream> 
#include <string> 
#include<cstdio>
using namespace std; 
int even=0,odd=0,i; 
int main() 
{//freopen("input.txt","r",stdin); 
//freopen("output.txt","w",stdout); 
string a; 
cin>>a; 
for(i=0;i<a.length();i++){ 
{if((i + 1) % 2 == 0)even+=a[i]-'0'; 
if((i + 1)%2==1)odd+=a[i]-'0';} 
}if((odd-even)%11==0)cout<<"YES"; 
else cout<<"NO"; 
system("pause");
return 0; 
}
