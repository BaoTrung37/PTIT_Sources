//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,a[1000005];
void input(){
    cin >> n;
    for(int i = 0 ; i < 2 * n ; i++)
        cin >> a[i];
}

void solve(){
    sort(a,a + 2 * n);
    cout << abs(a[n - 1] - a[n]) << endl;
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