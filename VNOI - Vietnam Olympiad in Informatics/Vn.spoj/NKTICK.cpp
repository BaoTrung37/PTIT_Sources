//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;

typedef long long i64;
const int mod = 1e9+7;
using namespace std;

int n,t[60000],r[60000],f[60000],g[60000];

void input(){
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        cin >> t[i];
    for(int i = 1 ; i < n ; i++)
        cin >> r[i];
}

void solve(){
    f[1] = t[1];
    g[1] = 1 << 20;
    f[2] = t[1] + t[2];
    g[2] = r[1];
    for(int i = 3 ; i <= n ; i ++){
        f[i] = min(f[i-1],g[i-1]) + t[i];
        g[i] = min(f[i-2],g[i-2]) + r[i-1];
    }
    cout << min(f[n],g[n]);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t2 = 1; //cin >> t2;
    while(t2--){
        input();solve();
    }
    return 0;
}

// Code By CodeWar :3