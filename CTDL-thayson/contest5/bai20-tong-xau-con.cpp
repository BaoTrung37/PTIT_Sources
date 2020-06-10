/**
 *    authur: Bao Trung
 *      s = 1234
 *      dp[0] = 1
 *      dp[1] = 2 + 12 = 2 * 2 + 10 * (1)
 *      dp[2] = 3 + 23 + 123 = 3 * 3 + 10 * (2 + 12)
 *      dp[3] = 4 + 34 + 234 + 1234 = 4 + 30 + 4 + 230 + 4 + 1230 + 4
 *            = 4 * 4 + 10 * (3 + 23 + 123)
 *      dp[i] = s[i] * (i + 1) + 10 * dp[i - 1]
 *     
**/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s;
ll dp[102];
void solve(){
    cin >> s;
    ll res ,n = s.length();
    memset(dp,0,sizeof(dp));
    dp[0] = s[0] - '0';
    res = dp[0];
    for(int i = 1 ; i < n ; i++){
        ll num = s[i] - '0';
        dp[i] = (i + 1) * num + 10 * dp[i - 1];
        res += dp[i];
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3