#include <iostream>
using namespace std;
int main()
{int i,j,n,b;
cin>>n>>b;
for(i=1;i<=1001;i++)
{
for(j=i;j<=1001;j++)                    
                   {
                   if(i+j==n&&i*j==b)cout<<i<<" "<<j;
                                        
                                        
                   } 
                    
}
    
    
system("pause");
return 0;    
}
