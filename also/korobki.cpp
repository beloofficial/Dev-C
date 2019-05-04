#include<iostream>
#include<algorithm>
using namespace std;
int main()
{freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
     
    int b[4],a[4],c,d,e,f,i;
cin>>a[1]>>a[2]>>a[3]>>b[1]>>b[2]>>b[3];
sort(a+1,a+4);
sort(b+1,b+4);
if(a[1]==b[1]&&a[2]==b[2]&&a[3]==b[3])cout<<"Boxes are equal";
else if(a[1]>=b[1]&&a[2]>=b[2]&&a[3]>=b[3])cout<<"The first box is larger than the second one";
else if(a[1]<=b[1]&&a[2]<=b[2]&&a[3]<=b[3])cout<<"The first box is smaller than the second one";
else cout<<"Boxes are incomparable";
//system("pause");
return 0;    
}        
