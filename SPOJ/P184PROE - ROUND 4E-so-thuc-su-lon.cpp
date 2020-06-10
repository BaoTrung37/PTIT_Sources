//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
i64 n , s;
void input(){
    cin >> n >> s;
}
int tong(i64 n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n/=10;
    }
    return sum;
}
void solve(){
    i64 x = s;
    for(i64 i = s + 1 ;   ; i++){
        if(i - tong(i)>= s){
            x = i;
            break;
        }
    }
    i64 kt = n - x + 1;
    if(kt < 0) cout <<"0";
    else cout << kt;
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