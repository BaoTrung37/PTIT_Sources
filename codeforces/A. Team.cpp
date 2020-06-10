//https://codeforces.com/problemset/problem/231/Av
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n,a,b,c;
void solve(){
    cin >> n;
    int res = 0;
    while(n--){
        cin >> a >> b >> c;
        if(a+b+c > 1) res ++;
    }
    cout << res << endl;
}
int main(){
    solve();
    return 0;
}

// code by Bao Trung PTIT