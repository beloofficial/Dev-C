#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
 
using namespace std;
 
string s,s1;
int q,n,k,a[1011],b[1011],w,m;
 
int main(){
 cin >>s;
 cin >>s1;
 m=s.size();
 w=s1.size();
 n=max(m,w);
 for (int i=1;i<=n+1;i++){
     if (m<1) a[i]=0;
     else a[i]=s[m-1]-48;
     if (w<1) b[i]=0;
     else b[i]=s1[w-1]-48;
     m--;w--;
     }
 for (int i=1;i<=n;i++){
     a[i]=a[i]+b[i];
     if (a[i]>9) {a[i]-=10;a[i+1]++;}
     }
 for (int i=n+1;i>=1;i--){
     if (a[i]!=0&&q==0){q=2;}
     if (q!=0)cout <<a[i];
     }    
     if (q==0) cout <<0;
 return 0;
}
