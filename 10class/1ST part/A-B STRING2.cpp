#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
 
using namespace std;
 
string s,s1;
int q,n,k,a[1011],b[1011],w,m;
 
int main(){
 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);
 cin >>s;
 cin >>s1;
 m=s.size();
 w=s1.size();
 if (m>w) q=1;
 else if (m<w) q=2;
  
 n=max(m,w);
  
 while (q==0&&k<n){
       if (s[k]<s1[k]) {q=2;}
       else if (s[k]>s1[k]) {q=1;}
       k++;}
 k=0;
 for (int i=1;i<=n;i++){
          if (q==2){
                    a[i]=s1[w-1]-48;
                    if (m<0)b[i]=-1;
                    else b[i]=s[m-1]-48;}
          else      {a[i]=s[m-1]-48;
                    if (w<0)b[i]=-1;
                    else b[i]=s1[w-1]-48;}
          k++;m--;w--;
     }   
  
 for (int i=1;i<=n;i++){
          //cout <<a[i]<<" "<<b[i]<<endl;
          if (b[i]>0){
          a[i]=a[i]-b[i];
          if (a[i]<0) {a[i]+=10;a[i+1]--;if (a[i+1]<0) {a[i+1]=9;a[i+2]--;}}}
          else if (a[i]<0) {a[i]+=10;a[i+1]--;if (a[i+1]<0) {a[i+1]=9;a[i+2]--;}}
}
 if (q==2) cout<<"-";
 q=0;
 for (int i=n;i>=1;i--){
 if (a[i]!=0&&q==0){q=2;}
 if (q!=0) cout<<a[i];}
 if (q==0) cout <<0;    
 return 0;
}
