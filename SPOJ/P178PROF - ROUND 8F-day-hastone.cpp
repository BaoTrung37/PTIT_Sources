//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n;
void input(){
    
}

void solve(){
    while(cin >> n){
        if(n == 0) break;
        int cnt = 1;
        while(n != 1){
            if(n % 2 == 0) n/=2 , cnt++;
            else n = 3 * n + 1 , cnt++;
        }
        cout << cnt << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t =1 ; //cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3