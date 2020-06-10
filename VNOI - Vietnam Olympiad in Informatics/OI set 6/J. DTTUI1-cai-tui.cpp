/**
 *    authur: Bao Trung <3
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
int n,m;
ll w[102],v[102],dp[102][102],res = 0;

void solve(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i ++){
        cin >> w[i] >> v[i]; 
    }
    dp[0][0] = 0;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            if( j < w[i]) dp[i][j] = dp[i - 1][j];
            else{
                dp[i][j] = max(dp[i - 1][j] , dp[i - 1][j - w[i]] + v[i]);
            } 
            res = max(res,dp[i][j]);
        }
    }
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3