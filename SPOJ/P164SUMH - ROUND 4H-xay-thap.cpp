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
    cin >> n;
}

void solve(){
    int sl = 0,sum = 0,sum1,x = 0;
    while(sum + ((x+1) * x) /2 <= n){
        x++;
        sum1 = (x+1)*x/2;
        sum = sum + sum1;
        sl++;
        //cout << sum << " ";
    }
    cout << sl;
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