//https://codeforces.com/problemset/problem/59/A
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
string s,u,l;
int countU,countL;
void solve(){
    cin >> s;
    for(int i = 0 ; i < s.length() ; i++){
        if(isupper(s[i]))
            countU++;
        else countL++;
        u += toupper(s[i]);
        l += tolower(s[i]);
    }
    if(countU > countL) cout << u;
    else cout << l;
}
int main(){
    solve();
    return 0;
}
