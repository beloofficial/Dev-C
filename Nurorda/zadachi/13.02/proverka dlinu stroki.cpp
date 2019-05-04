#include<iostream>
#include<string>
using namespace std;
bool compare(int x,int y)
{int l=2,r=min(n-x+1,n-y+1),res=0;
while(l<r)
{
int mid=(l+r)/2;       
       if(Hash(x,x+mid-1)==Hash(y,y+mid-1))
       res=mid;l=mid+1;
       else r=mid-1;
}
     if(s[x+res-1]<s[y+res-1])return 1;
     else return 0;
}
int main()
{string q,k,n;
cin>>q>>k;
compare(q,k)
for(int i=0;i<s.size();i++)
cout<<s[i];
    
system("pause");
return 0;     
}

