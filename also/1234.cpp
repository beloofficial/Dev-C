#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
   
   
   int i,n,a[111],k,j=0;
cin>>n>>k;
    for(i=1;i<=n;i++)
    {cin>>a[i];}
   
   sort(a+1,a+n+1);
   for(i=1;i<=n;i++){
                     if(a[i]<=k){k=k-a[i];j++;}
}
cout<<j;
//system("pause");
return 0;    
}
//for i=1..n-1{
 // for j=n-1..i{
//   if(a[j] > a[j+1]) a[j] <---> a[j+1];
