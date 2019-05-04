   #include <iostream> 
   #include<cstdio>
using namespace std; 
int main () 
{ 
int c=0,n,a[110000],k; 
cin>>n; 
for(int i=0;i<n;i++) 
cin>>a[i]; 
cin>>k; 
for(int i=0;i<n;i++) 
{ 
if(a[i]>=k) 
c+=k; 
else 
c+=a[i]; 
} 
cout<<c; 
return 0;
}
