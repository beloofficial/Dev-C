#include<iostream>
#include<stack>
#include<string>

using namespace std;
stack<char> s;
int j,n,i,w=0,q=0,m;
int main()
{
 
 string ss;
 cin>>m;
 for(j=1;j<=m;j++)
 {
 
 cin>>ss;
  for(i=0;i<ss.size();i++)
  {
   if(ss[i]=='(') s.push(ss[i]);
   else if(ss[i]==')'&&s.size()==0) {q++;break;}
   else if(ss[i]==')'&&s.size()!=0) s.pop();
   
  }
 //cout<<s.size()<<" ";
  if(s.size()==0&&q==0) cout<<"Yes"<<endl;
 else cout<<"No"<<endl;
 }

return 0;
}
