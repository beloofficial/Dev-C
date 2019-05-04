   #include<iostream> 
#include<string> 
#include<cstdio>
using namespace std; 
int main() 
{ 
int n,s=0; 
cin>>n; 
for(int i=1;i<n;i++) 
{ 
int h=0; 
int k=i; 
while(k>=1) 
{ 
h=h*10+(k%10); 
k=k/10; 
} 
if(h+i==n) 
s++; 
} 
cout<<s; 
return 0; 
}
