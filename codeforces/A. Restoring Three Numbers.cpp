//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
i64 a[4];
void input(){
    cin >> a[0] >> a[1] >> a[2] >> a[3];
}

void solve(){
    sort(a,a+4);
    cout << (a[0] + a[1] - a[2]) /2 << " ";
    cout << (a[0] - a[1] + a[2]) /2 << " ";
    cout << (-a[0] + a[1] + a[2]) /2;
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