#include <iostream> 
using namespace std; 

int main() 
{ 
freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout); 
long int a,b,c; 
cin >> a >> b; 
a %= 10; 
c=a; 
for (int i=1;i<b;i++) 
{ 
a*=c; 
a%=10; 
} 
cout << a; 
system("pause");
return 0; 
}
