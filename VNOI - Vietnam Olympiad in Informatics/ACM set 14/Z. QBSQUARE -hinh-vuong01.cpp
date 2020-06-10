/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m,a[1002][1002],dp[1002][1002];
void solve(){
    cin >> n  >> m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++){
             cin >> a[i][j];
             dp[i][j] = a[i][j];
        }
    int res = 0;
    for(int i = 2; i <= n; i ++){
        for(int j = 2; j <= m ; j++){
            if( a[i][j] == a[i - 1][j - 1] && a[i][j] == a[i - 1][j] && a[i][j - 1])
                dp[i][j] = min ( dp[i - 1][j - 1] , min (dp[i - 1][j] , dp[i][j - 1])) + 1; 
            res = max(res , dp[i][j]);
        }
    }
    cout << res<< '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3