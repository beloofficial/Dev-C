#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

string a,b,c;
int i;

int main()
{
 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);
 cin>>a>>b>>c;
 if (a.size() > b.size() && a.size() > c.size()) cout << a;
 else if (a.size() < b.size() && b.size() > c.size()) cout << b;
 else if (c.size() > b.size() && a.size() < c.size()) cout << c;
 else if (a.size() == b.size() && a.size() == c.size()) {
      for (int i = 0;i < a.size(); i++)
      {
         if (a[i] > b[i] && a[i] > c[i]) 
            {cout << a ; return 0;}
         else if (a[i] < b[i] && c[i] < b[i])
              {cout << b ; return 0;}
         else if (a[i] < c[i] && c[i] > b[i])
              {cout << c ; return 0;}
      }
}
 else if (a.size()==b.size()) {for (int i = 0;i < a.size(); i++){
         if (a[i] > b[i]) {cout <<a;return 0;}
         else {cout <<b;return 0;}
         }}
 else if (c.size()==b.size()) {for (int i = 0;i < b.size(); i++){
         if (c[i] > b[i]) {cout <<c;return 0;}
         else {cout <<b;return 0;}
         }}
 else if (a.size()==c.size()) {for (int i = 0;i < a.size(); i++){
         if (a[i] > c[i]) {cout <<a;return 0;}
         else {cout <<c;return 0;}
         }}
system ("pause"); 
return 0;   
}
