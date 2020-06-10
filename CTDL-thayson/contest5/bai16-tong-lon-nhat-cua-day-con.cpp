/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,a[12000],dp[10002],res;
void solve(){
    cin >> n;
    res = 0;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    for(int i = 0 ; i < n ; i++)
        dp[i] = a[i];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            if(a[j] < a[i]){
                dp[i] = max(dp[i], dp[j] + a[i]);
            }
        }
        res = max(res,dp[i]);
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