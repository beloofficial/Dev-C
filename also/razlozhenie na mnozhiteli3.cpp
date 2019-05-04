#include<iostream>
using namespace std;
int main()
{int i,n,a,h=1;
cin>>a;
while(a!=h)
{
           
for(i=2;i<=a;i++)
 
                                            if(a%(h*i)==0)
                                            {
                                                          h=h*i;if(h==a)cout<<i;
                                                          else cout<<i<<"*";
                                            }
}
system("pause");
return 0;    
}
