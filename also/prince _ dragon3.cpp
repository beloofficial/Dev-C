  #include <iostream> 
using namespace std; 
//typedef long long ll; 
int main() 
{ 
freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout); 
int  a,b,c,j=0; 
cin>>a>>b>>c; 
if (a==b) 
cout<<1; 
else if (a<=c&&a!=b) 
cout<<"NO"; 
else 
{ 
while(b>0) 
{ 
b=b-a; 
j++; 
if (b<=0) 
{ 
break; 

} 
b+=c; 
} 
cout<<j;
 
} 
return 0;}
