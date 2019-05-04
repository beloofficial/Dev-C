#include<iostream>
#include<string>
using namespace std;
int main()
{int n,sm=0;
string s;
cin>>n;
for(int i=1;i<=n;i++)
    {cin>>s;
            if(s[0]==43||s[2]==43)sm++;
            else sm--;
}
cout<<sm;
system("pause");
return 0;    
}
