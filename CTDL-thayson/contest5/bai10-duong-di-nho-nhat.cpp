/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

const int nmax = 1002;

int n,m,a[nmax][nmax],dp[nmax][nmax];
void solve(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1; j <= m ; j++){
            cin >> a[i][j];
            dp[i][j] = 0;
        }
    dp[1][1] = a[1][1];
    for(int i = 2; i <= n ; i++) dp[i][1] = dp[i - 1][1] + a[i][1];

    for(int i = 2; i <= m ; i++) dp[1][i] = dp[1][i - 1] + a[1][i];
    
    for(int i = 2 ; i <= n ; i++){
        for(int j = 2; j <= m ; j++){
            dp[i][j] = min(dp[i - 1][j] , min(dp[i - 1][j - 1],dp[i][j - 1])) + a[i][j];
        }
    }
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <= n ; j++)
    //         cout << dp[i][j] << ' ';
    //     cout << '\n';
    // }
    cout << dp[n][m] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3