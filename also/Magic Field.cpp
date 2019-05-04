#include<iostream>
#include<vector>
#include<cstdio>
#include<fstream>
using namespace std;
int n,a[11111],i,k=2,s=0,mn=30000,t;
void dfs(int h){
for(i=1;i<=h/k;i++){
for(int j=h/k+i;j<=h/k+i;j++){
if(a[i]==a[j])s++;
 if(i==h/k&&a[i]!=a[j]||i==h/k&&k!=2){if(s<mn&&h/k==s)mn=s;
else {mn=mn;k++;}               
}
}
}
}
int main()
{freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
    int n,p,h;
cin>>n;
for(p=1;p<=n;p++)
{cin>>a[p];}
for(p=1;p<=n;p++){
if(s!=n/k)dfs(n);
else break;
}

        
for(p=1;p<=n;p++)
{t=t+a[i];}        
        
if(t/n==a[1])cout<<1;        
else  if(k==2)cout<<s;
else if(s==0||mn==30000)cout<<n-1;

else cout<<mn;
//system("pause");
return 0;    
}
