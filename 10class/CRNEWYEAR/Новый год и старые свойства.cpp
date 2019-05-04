#include <algorithm>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    long long int n,num=0,k=1,num1=0,b[1111];
    char a[111111];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	
    	cin>>a[i];num*=10;
    	num+=a[i]-48;
	}
	for(int i=1;i<=n;i++)
    {
    	b[i]=i;num1*=10;
    	num1+=b[i];
	}
	if(num1==num){
		cout<<k;return 0;
	}
	else k++;
    while(next_permutation(b+1,b+n+1))
    {
        num1=0;
    	for(int i=1;i<=n;i++)
    	{
    		num1*=10;
    		num1+=b[i];//cout<<b[i];
		}cout<<num<<" "<<num1<<endl;
		if(num1==num){
		cout<<k;return 0;}
		else k++;
	}
 
  return 0;
}
