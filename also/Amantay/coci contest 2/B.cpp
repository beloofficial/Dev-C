#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

bool was[1001];
string s[45][45],s1,s2,s3,c1,c2,c3;
int ans,k;

int main()
{
 for (int i = 0;i < 6;i++){
 cin >> s[i][1];   
 }
 for (int i = 0;i < 6;i++){
     for (int j = 0;j < 6;j++){
         for (int q = 0;q < 6;q++){
             if (i != j && j != q && i != q){
              ans = 0;         
             was[i] = true;
             was[j] = true;
             was[q] = true;
             c1 = c2 = c3 = "";
              s1 = s[i][1];
              s2 = s[j][1];
              s3 = s[q][1];
              c1 = c1+s1[0]+s2[0]+s3[0];
              c2 = c2+s1[1]+s2[1]+s3[1];
              c3 = c3+s1[2]+s2[2]+s3[2];
              for (int w = 0;w < 6;w++){
                  if (!was[w]){
                  if (c1 == s[w][1]){ans++;c1="";}else
                  if (c2 == s[w][1]){ans++;c2="";}else
                  if (c3 == s[w][1]){ans++;c3="";}
                  }
              }
              was[i] = false;
              was[j] = false;
              was[q] = false;
              if (ans == 3){k++;cout<<s1<<endl<<s2<<endl<<s3;return 0;}
              }              
             }
         } 
 }
 if (k==0)cout<<0;
 return 0;
}
