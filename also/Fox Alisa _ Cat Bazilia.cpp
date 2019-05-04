#include <iostream> 
using namespace std; 
int main() 
{ 
freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout); 
int res,res1=0,res2=0; 
cin>>res; 
res1=res/5; //1
res=res%5; //3
if (res%3==0) 
{ 
res2+=res/3; //0=0+3/3
} 
else 
{ 
while(res%3!=0) 
{ 
res+=5; 
res1--; 
} 
res2=res/3; 
} 
cout<<res1<<" "<<res2; 
return 0; 
}
