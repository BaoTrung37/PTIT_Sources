//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n,k;
void input(){
    cin >> n >> k;
}

void solve(){
    int kt = 240 - k;
    while((n * (n + 1) / 2) * 5 > kt){
        n--;
    }
    cout << n;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){
        input();solve();
    }
    return 0;
}

// Code By CodeWar :3