/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9 + 7;

int n,k;
void solve(){
    cin >> n >> k;
    vector <ll> dp(n,0);
    ll sum = 0;
    for(int i = 0 ; i < n ; i++){
        dp[i] = (sum + (i < k)) % mod;
        sum = (sum + dp[i]) % mod;
        if(i >= k) sum = (sum + mod - dp[i - k]) % mod; 
    }
    cout << dp[n - 1] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3