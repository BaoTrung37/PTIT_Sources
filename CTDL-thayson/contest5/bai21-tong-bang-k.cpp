/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int  mod = 1e9+7;
int n,k,a[1002];
ll dp[1002];
void solve(){
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    memset(dp,0,sizeof(dp));
    dp[0] = 1;
    for(int i = 1 ; i <= k ; i++){
        for(int j = 0 ; j < n ; j++)
            if(i >= a[j])
                dp[i] = (dp[i] + dp[i - a[j]]) % mod;
    }
    cout << dp[k] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3