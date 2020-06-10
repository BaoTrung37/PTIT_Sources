/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m;
ll dp[100][100];
void solve(){
    cin >> n >> m;
    memset(dp,0,sizeof(dp));
    for(int i = 0; i <= n ; i++)
        dp[i][0] = 1;
    for(int i = 0; i <= m ; i++)   
        dp[0][i] = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j <= m ; j++)
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];//, cout << dp[i][j] << ' ';
        //cout << '\n';
    }
    // for(int i = 0 ; i <= n ; i++){
    //     for(int j = 0 ; j <= m ; j++){
    //         cout << dp[i][j] << ' ';
    //     }
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