/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,v,a[1002],b[1002];
int dp[1002][2002],res;
void solve(){
    cin >> n >> v;
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    for(int i = 1 ; i <= n ; i++) cin >> b[i];
    memset(dp,0,sizeof(dp));
    dp[0][0] = 1;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= v ; j++){
            if(j < a[i]) dp[i][j] = dp[i - 1][j];
            else 
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i]]  + b[i]);
        }
    }
    cout << dp[n][v] << '\n'; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3