    #include<iostream>  
#include<string> 
using namespace std; 
int main(){ 
freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout); 
string s; 
int n; 
cin>>s; 
cin>>n;	
if(n==0){ 
cout<<"Yes"; 
} 
else 
if(n==1){ 
cout<<"Yes"; 
}else 
if(s=="Home"||s=="School"&&n%2==1){ 
cout<<"Yes"; 
}	
else 
cout<<"No"; 
return 0; 
}
