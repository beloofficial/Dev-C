  #include<iostream> 
#include <stdio.h> 
#include<cstdio>
using namespace std; 
int main() 
{ 
long long int a[101],b[101],n,i,j,k,l,m,r; 

cin>>n; 
k=1; 
m=0; 
for(i=1;i<=n;i++){ 


cin>>a[i]; 
b[i]=a[i]; 
} 
for(i=1;i<n;i++) 
for(j=i+1;j<=n;j++){ 
if(b[i]>b[j]){ 
l=b[i]; 
b[i]=b[j]; 
b[j]=l; 
} 
} 
for(i=1;i<n;i++){ 
if(b[i]==b[i+1]) 
k++; 
else 
{ 
if(k>m){ 
m=k; 
r=b[i]; 
} 
k=1; 
} 
} 
for(i=1;i<=n;i++) 
if(a[i]!=r) 
cout<<a[i]<<" "; 
for(i=1;i<=n;i++) 
if(a[i]==r) 
cout<<a[i]<<" "; 
}
