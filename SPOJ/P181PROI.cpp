//https://www.spoj.com/PTIT/problems/P181PROI/
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
string s;
int n,res;
void solve(){
    cin >> n;
    cin >> s;
    for(int i = 0 ; i < s.length() - 2 ; i++){
        if(s[i] == '0' && s[i+1] =='1' && s[i+2] == '0'){
            s[i+2] = '1';
            res ++;
        }
    }
    cout << res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
