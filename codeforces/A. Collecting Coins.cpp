//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,a[3];
void input(){
    cin >> a[0] >> a[1] >> a[2] >> n;
}

void solve(){
    sort(a,a+3);
    n -= 2 * a[2] - a[1] - a[0];
    cout << ((n < 0 || n % 3 != 0)? "NO\n" : "YES\n");
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3