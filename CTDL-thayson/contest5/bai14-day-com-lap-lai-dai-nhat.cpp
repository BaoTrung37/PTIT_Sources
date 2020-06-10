/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,dp[200][200];
string s;

void solve(){
    cin >> n >> s;
    memset(dp,0,sizeof(dp));
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= n ; j++){
            if(s[i - 1] == s[j - 1] && i != j)
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);
        }
    cout << dp[n][n] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3