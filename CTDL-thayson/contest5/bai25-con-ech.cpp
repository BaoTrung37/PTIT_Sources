/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
ll dp[100];
void solve(){
    cin >> n;
    dp[1] = 1; dp[2] = 2; dp[3] = 4;
    for(int i = 4 ; i <= n ; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i -3];
    cout << dp[n] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3