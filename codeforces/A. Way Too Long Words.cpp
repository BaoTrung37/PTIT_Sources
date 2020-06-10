//https://codeforces.com/problemset/problem/71/As
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
string s;
void input(){
    cin >> s;
}

void solve(){
    int len = s.length();
    if (len <= 10) cout << s;
    else cout << s[0] << len - 2 << s[len - 1];
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;  cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3