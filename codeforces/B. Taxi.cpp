//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,a[5];
void input(){
    cin >> n;
    for(int i = 0,x; i < n ; i++){
        cin >> x;
        a[x]++;
    }
}

void solve(){
    a[1] = max( a[1] - a[3] , 0);
    cout << a[3] + a[4] + (a[1] + 2 * a[2] + 3) / 4;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;// cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3