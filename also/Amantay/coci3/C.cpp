#include <iostream>
#include <cstdio>

using namespace std;

string s;
char tmp[24];
long long i, ans, b[700011], a[700011], n, k;

int main(){
    scanf("%I64d%I64d", &n, &k);
    for (i = 1;i <= n; i++){
        scanf("%s", &tmp);  
        s = (string)(tmp);
        a[i] =  s.size();
        }   
    int  l = n, r = l+k;
    for (int j = 1;j <= n; j++){ 
        ans+=b[a[l]];
            b[a[l]]++;
            b[a[r]]--;
        l--;
        r = l+k;
        }
        printf("%I64d", ans);
        //system ("pause");
        return 0;
}
