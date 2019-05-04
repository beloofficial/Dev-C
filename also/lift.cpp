#include <iostream> 
#include <string> 
using namespace std;  
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
int sum=0,mex=0,men=0,ans=1; 
string s; 
cin>>s; 
for(int i=0;i<s.size();i++){ 
if(s[i]-48==1){sum++;} 
else if(s[i]-48==2){sum--;} 
 if(mex<sum){mex=sum;ans++;}
 if(men>sum){men=sum;ans++;}
} 
cout<<ans;
//system("pause");
return 0; 
}
