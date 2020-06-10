//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
i64 x , y , a , b;
void input(){
    cin >> x >> y >> a >> b;
}

void solve(){
    (((y-x) % (a+b) == 0) ? cout << (y - x) / (a+b) : cout << -1);
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        input();solve();
    }
    return 0;
}

// Code By CodeWar :3