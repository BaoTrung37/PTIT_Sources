/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
ll dp[102];
void in(){
    dp[0] = dp[1] = 1;
    for(int i = 2 ; i <= 100 ; i++){
        dp[i] = 0;
        for(int j = 0 ; j < i ; j++){
            dp[i] += dp[j] * dp[i - j - 1];
        }
    }
}
void solve(){
    cin >> n;
    cout << dp[n] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    in();
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3