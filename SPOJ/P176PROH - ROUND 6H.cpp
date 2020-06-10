//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
i64 a[3];
void solve(){
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    cout << a[2] - a[0] << endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--)
        solve();
    return 0;
}
