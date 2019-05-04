#include <iostream> 
#include <string> 

using namespace std; 

int a=1,b=0,c=0; 
string s; 
 
int main()
{ 
 freopen ("input.txt","r",stdin); 
 freopen ("output.txt","w",stdout); 
 cin>>s; 
 for(int i=0;i<s.length();i++)
 { 
  if (s[i]=='A'){ 
  swap(a, b); 
  } 
  if (s[i]=='B'){ 
  swap(c,b); 
  } 
  if (s[i]=='C'){ 
  swap(a,c); 
  } 
 } 
 if (a==1){cout<<"1";  
 }else 
 if (b==1){cout<<"2"; 
 }else 
 if (c==1){cout<<"3"; 
 } 
}
