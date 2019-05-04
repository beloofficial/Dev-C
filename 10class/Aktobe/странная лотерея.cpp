 #include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
string s; 
int c=0,m=0,l=0; 
cin>>s; 
m=s.size(); 
for (int j=0;j<2;j++) 
{ 
for (int i=0;i<s.size()-1;i++) 
{ 
if (s[i]<s[i+1]&&c<2) 
{ 
s.erase(i,1); 
c++; 
}if (c==2) 
{ 
l++; 
break; 
} 
}if (l>0) 
{ 
break; 
} 
}if (c<2) 
{ 
s.erase(s.end()-(2-c),s.end()); 
} 
cout<<s; 
return 0; 
}
