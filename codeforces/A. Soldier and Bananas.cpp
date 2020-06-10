//https://codeforces.com/problemset/problem/546/A
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int k,n,w;

void solve(){
    cin >> k >> n >> w;
    i64 sum = k * (w + 1) * w / 2;
    if(sum <= n) cout << "0";
    else cout << sum - n;
}

int main(){
    solve();
    return 0;
}
