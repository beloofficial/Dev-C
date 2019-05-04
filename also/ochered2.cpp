#include<iostream>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
    int a;
cin>>a;
if(a==1)cout<<0<<" "<<0;
else if(a>145)cout<<"NO";
else cout<<(a*5-5)/60+0<<" "<<(a*5-5)-((a*5-5)/60)*60;
//else cout<<(a*5-10)/60<<" "<<(a*5-10)-(a*5-10)/60*60;
     
     
//system("pause");
return 0;    
}
