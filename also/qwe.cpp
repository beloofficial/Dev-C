#include <iostream>
#include <string>

using namespace std;

string s;
int a[10000];

int main(){
 cin >>s;
 for (int i=0;i<s.size();i++)
 {//0-48    9-57
 a[i]=s[i]-48;
 }
 for (int i=s.size();i>0;i--){
     cout<<a[i]<<" ";}
 system ("pause");
 return 0;   
}
