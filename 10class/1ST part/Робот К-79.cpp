#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
long long int a[450][450],q=220,w=220,k=0,sum,i,ok;
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
string s;
a[q][w]=1;
cin>>s;
for(i=0;i<s.size();i++)
{
       if(s[i]==83)
       {sum++;
                       if(k==0)       {a[q-1][w]++;q=q-1;if(a[q][w]==2){ok=1;break;}}
                  else if(k==1||k==-1){a[q][w-1]++;w=w-1;if(a[q][w]==2){ok=1;break;}}
                  else if(k==2||k==-2){a[q+1][w]++;q=q+1;if(a[q][w]==2){ok=1;break;}}
                  else if(k==3||k==-3){a[q][w+1]++;w=w+1;if(a[q][w]==2){ok=1;break;}}
                  
       }
      else if(s[i]==76){k++;
           if(k==4)k=0; }
          else if(s[i]==82){k--;
           if(k==-4)k=0;}          
       
}
if(ok==1)cout<<sum;
else cout<<"-1";
system("pause");
return 0;    
}
