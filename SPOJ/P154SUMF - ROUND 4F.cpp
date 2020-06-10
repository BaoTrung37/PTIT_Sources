//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n,a,b,res;
void solve(){
    cin >> n;
    res = 0;
    while(n--){
        cin >> a >> b;
        if (a <= b -2) res ++;
    }
    cout << res << endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();    
    return 0;
}
