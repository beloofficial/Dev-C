 #include <iostream> 
 #include<cstdio>
using namespace std; 
int main() 
{ 
char s; 
long long a; 
cin>>s>>a; 
if(1<=a-2 && a-2<=8) 
{ 
if('a'<=char(int(s)-1) && char(int(s)-1)<='h') 
cout<<char(int(s)-1)<<a-2<<'\n'; 
if('a'<=char(int(s)+1) && char(int(s)+1)<='h') 
cout<<char(int(s)+1)<<a-2<<'\n'; 
} 
if(1<=a+2 && a+2<=8) 
{ 
if('a'<=char(int(s)-1) && char(int(s)-1)<='h') 
cout<<char(int(s)-1)<<a+2<<'\n'; 
if('a'<=char(int(s)+1) && char(int(s)+1)<='h') 
cout<<char(int(s)+1)<<a+2<<'\n'; 
} 
if('a'<=char(int(s)-2) && char(int(s)-2)<='h') 
{ 
if(1<=a-1 && a-1<=8) 
cout<<char(int(s)-2)<<a-1<<'\n'; 
if(1<=a+1 && a+1<=8) 
cout<<char(int(s)-2)<<a+1<<'\n'; 
} 
if('a'<=char(int(s)+2) && char(int(s)+2)<='h') 
{ 
if(1<=a-1 && a-1<=8) 
cout<<char(int(s)+2)<<a-1<<'\n'; 
if(1<=a+1 && a+1<=8) 
cout<<char(int(s)+2)<<a+1<<'\n'; 
} 
return 0; 
}
