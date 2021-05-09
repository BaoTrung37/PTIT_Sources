/*
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

vector <ll> dp(40);
ll n;
void init(){
    int n = 40;
    dp[0] = 1;
    for(int i = 1 ; i < n ; i++)
        dp[i] = dp[i - 1] * 3;
}
void solve(){
    cin >> n;
    if(binary_search(all(dp) , n)){
        cout << n << '\n';
        return ;
    }
    int pos = lower_bound(all(dp),n) - dp.begin();
    ll ans = dp[pos];
    ll sum = 0;
    for(int i = 0 ; i < pos ; i++)
        sum += dp[i];
    if(sum < n){
        cout << ans << '\n';
    }
    else{
        for(int i = pos - 1 ; i >= 0 ; i--){
            if(sum - dp[i] >= n){
                sum -= dp[i];
            }
        }
        cout << min(ans,sum) << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    init();
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)