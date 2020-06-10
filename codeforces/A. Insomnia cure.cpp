//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int k,l,m,n,d;  
void input(){
    cin >> k >> l >> m >> n >> d;
}

void solve(){
    int cnt = 0;
    for(int i = 1 ; i <= d; i++){
        if(i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0 && i % n!= 0)
            cnt++;
    }
    cout << d - cnt ;
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