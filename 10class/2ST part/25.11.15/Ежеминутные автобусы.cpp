#include<iostream>
#include<cstdio>
using namespace std;
long long int b[555555],c[555555],mx=-999999;
int n,a;
int main()
{

	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		if(i-b[a]>mx&&b[a]!=0){
		mx=i-b[a];}
		b[a]=i;
	}
	printf("%d", mx);
	return 0;
}
