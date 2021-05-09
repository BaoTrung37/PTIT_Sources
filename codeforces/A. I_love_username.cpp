//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n;
void input(){
    cin >> n;
    n--;
}

void solve(){
    int x;
    cin >> x;
    int res = 0,max = x,min = x;
    while(n--){
        cin >> x;
        if(x > max) res ++ , max = x;
        if(x < min) res ++ , min = x;
    }
    cout << res;
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