#include <iostream>
#include <cstdio>
#include <string>
 
using namespace std;
 
int ans;
string s, s1, s2;
 
int main(){
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    cin >> s;
    cin >> s1;
    cin >> s2;
    if (s.size() > s1.size() && s.size() > s2.size()) cout << s;
    else if (s.size() < s1.size() && s2.size() < s1.size()) cout << s1;
    else if (s.size() < s2.size() && s1.size() < s2.size()) cout << s2;
    else if (s.size() == s2.size() && s1.size() == s2.size()) {
     for (int i = 0;i < s.size(); i++){
         if (s[i] >= s1[i]&& s[i] >= s2[i]) {cout <<s;i = s.size();}
         else if (s[i] <= s1[i] && s2[i]<=s1[i]){cout <<s1;i = s.size();}
         else if (s[i] <= s2[i] && s1[i]<=s2[i]){cout <<s2;i = s.size();}
         }
    }
    else if (s.size()==s1.size()) {
         for (int i = 0;i < s.size(); i++){
         if (s[i] > s1[i]) {cout <<s;i = s.size();}
         else if (s[i] < s1[i]){cout <<s1;i = s.size();}
         }}
    else if (s2.size()==s1.size()) for (int i = 0;i < s.size(); i++){
         if (s2[i] > s1[i]) {cout <<s2;i = s.size();}
         else if (s2[i] < s1[i]){cout <<s1;i = s.size();}
         }
    else if (s.size()==s2.size()) {for (int i = 0;i < s.size(); i++){
         if (s[i] > s2[i]) {cout <<s;i = s.size();}
         else if (s[i] < s2[i]){cout <<s2;i = s.size();}
         }}
    //system ("pause");
    return 0;
    }
