#include <iostream>
#include <string>

using namespace std;
int d;
string s;
int a[10000];

int main(){
 cin >>s;
 for (int i=0;i<s.size();i++)
 {//0-48    9-57
 a[i]=s[i]-48;
 }
 for (int i=0;i<s.size();i++)
 
   { if(a[0]>=0&&a[2]>=0&&a[4]>=0){
           if(a[1]==-5&&a[0]+a[2]==a[4])d=1;
       if(a[1]==-3&&a[0]-a[2]==a[4])d=1;
   if(a[1]==-6&&a[0]*a[2]==a[4])d=1;
   if(a[1]==-1&&a[0]/a[2]==a[4])d=1;}
   
   
   
   }
   if(d>0)cout<<"YES";
   else cout<<"NO";
 system("pause");
 return 0;   
}
