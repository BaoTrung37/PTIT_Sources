//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int y,k,n;
void input(){
    cin >> y >> k >> n;
}

void solve(){
    int i = 1,kt = 1;
    while(i * k <= n){
        if(i * k - y > 0){
            cout << i * k - y << ' ';
            kt = 0;
        } 
        i++;
    }
    if(kt == 1) cout << "-1";
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