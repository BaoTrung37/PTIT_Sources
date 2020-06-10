//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
string s;

void solve(){
    cin >> s;
    int a[100005]={0};
    int res = 0,k = 0;
    int dem = 0;
    for(int i = 0 ; i < s.length() ; i++){
        dem = 1;
        if(s[i] != '0'){
            for(int j = i + 1 ; j < s.length() ; j++){
                if ( s[i] == s[j]){
                    dem++;
                    s[j] = '0';
                }
            }
            a[k] = dem;
            k++;
        }
    }
    int X = k;
    sort(a,a+X);
    for(int i = 0 ; i < X - 2 ; i++)
        res += a[i];
    cout << res;
}
int main(){
    solve();
    return 0;
}
