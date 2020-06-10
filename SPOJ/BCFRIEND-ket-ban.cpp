//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
i64 n,res,k;
map <i64,i64> m;
void solve(){
    cin >> n >> k;
    int temp;
    for(int i = 0 ; i < n ; i++){
        cin >> temp;
        res += m[k-temp];
        m[temp]++;
    }
    cout << res;
}
int main(){
    solve();
    return 0;
}
