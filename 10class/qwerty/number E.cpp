 #include <iostream> 
#include <string>
#include<cstdio> 
using namespace std; 


int main() 
{int i; 
string e="7182818284590452353602875"; 
int n; 
cin>>n; 
if (n==0) cout<<3; 

else 
if (n==25) 
cout<<"2."<<e; 
else 
{cout<<"2."; 
for (i=0;i<n-1;++i) 
{ 
cout<<e[i]; 
} 
i++; 

int k; 
switch (e[i]) 
{ 
case '0': k=0;break; 
case '1': k=1;break; 
case '2': k=2;break; 
case '3': k=3;break; 
case '4': k=4;break; 
case '5': k=5;break; 
case '6': k=6;break; 
case '7': k=7;break; 
case '8': k=8;break; 
case '9': k=9;break; 
} 
//cout<<endl<<k; 
if (k>=5) cout<<char(e[i-1]+1); 
else cout<<(char)e[i-1]; 
} 

return 0; 
}
