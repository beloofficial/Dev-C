#include<iostream>
using namespace std;
int main()
{//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);   
    int n;
cin>>n;
if(n==1)cout<<3;
else if(n%2==0&&n>1)cout<<n*2*3+6;
else if(n%2!=0&&n>1)cout<<(n-1)*3+6;
    
system("pause");
return 0;    
} 
