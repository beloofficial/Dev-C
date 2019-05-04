#include<iostream>
#include<vector>
using namespace std;
int n,x[1111],t=1;
vector<char> prime(1111, true);
int main()
{int k,s=0;
cin>>n>>k;
prime[0] = prime[1] = false;
for (int i=2; i<=n; ++i)
if (prime[i])
if (i * 1ll * i <= n)
for (int j=i*i; j<=n; j+=i)
prime[j] = false;
    for (int i=2; i<=n; ++i)
    if(prime[i])cout<<i<<" ";
//---------------------------------------    
/*
    for (int i=2; i<=n; i++)
    {
             for (int e=i+1; e<=n; e++)
             if(prime[i]&&prime[e]){
                                    if(i+e+1==n)s++;
                                    }    
    }
    if(s>=k)cout<<"YES";
    else cout<<"NO";*/
    for (int i=2; i<=n; i++)
    {
        if(prime[i]){x[t]=i;t++;}
}
for (int i=1; i<=t-1; i++)
{for (int p=1; p<=t-1; p++){
    if(x[i]+x[i+1]+1==x[p])s++;
}}
if(s>=k)cout<<"YES";
    else cout<<"NO";
    
system("pause");
return 0;    
}
