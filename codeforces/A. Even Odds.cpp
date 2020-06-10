//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
i64 n,k;
void input(){
    cin >> n >> k;
}

void solve(){
    i64 kt;
    if(n % 2 == 0) kt = n / 2;
    else kt = n / 2 + 1;
    if(k <= kt) cout << k * 2 - 1;
    else cout << (k - kt) * 2;
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