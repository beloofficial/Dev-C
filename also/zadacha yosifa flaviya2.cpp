#include<iostream>
using namespace std;
int joseph (int n, int k) {
	int res = 0;
	for (int i=1; i<=n; ++i)
		res = (res + k) % i;
	return res + 1;
}
int main()
{//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    int n,k;
cin>>n>>k;
cout<<joseph(n,k);
    
    
system("pause");
return 0;    
}
