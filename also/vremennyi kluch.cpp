 #include <iostream> 
using namespace std; 
int main() 
{ 
freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout); 
long long int a,b=0,z; 
cin>>a; 
z=a; 
while (a!=0) 
{ 
if (a%2!=0) 
{ 
b++; 
} 
a/=2; 
} 
cout<<z+b; 
//system("pause");
return 0; 
}
