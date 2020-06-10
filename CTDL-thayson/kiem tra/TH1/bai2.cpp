/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,a[1000004];
ll dp[1000004];
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    dp[0] = a[0];
    dp[1] = max(a[0],a[1]);
    for(int i = 2 ; i < n ; i++)
        dp[i] = max(dp[i - 2] + a[i] , dp[i - 1]);
    cout << dp[n - 1] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)