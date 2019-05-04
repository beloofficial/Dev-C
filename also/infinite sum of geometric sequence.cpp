#include<iostream>
using namespace std;
int main()
{
double k,l,s=0,q,i;
cin>>k>>l;
q=k/l;
for(i=k;i>=0.00000000000000000000000001;i=i/q)
    {s=s+i;}
    
q=l/k;
k=100/(1-q);
cout<<k<<" "<<s;cout<<endl;
system("pause");
return 0;    
}
