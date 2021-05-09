//https://codeforces.com/problemset/problem/266/A
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
string s;
int n;
void input(){
    cin >> n >> s;
}

void solve(){
    int cnt = 0;
    for(int i = 0 ; i < s.length() - 1 ; i++){
        if(s[i] == s[i+1])
            cnt++;
    }
    cout << cnt;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3