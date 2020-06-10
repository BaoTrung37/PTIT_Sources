/**
 *    authur: Bao Trung
 * https://vietcodes.github.io/code/85/index.html
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,k;
void solve(){
    cin >> n >> k;
    vector <int> a(n);
    for(auto &i : a){
        cin >> i;
        i %= k;
    }
    vector <int> dp(k,INT16_MIN),g(k);
    dp[0] = 0;
    for(auto x : a){
        for(int j  = 0 ; j < k ; j++){
            g[j] = max(dp[j] , dp[(j - x + k) % k] + 1);
        }
        dp.swap(g);
    }
    cout << dp[0] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3