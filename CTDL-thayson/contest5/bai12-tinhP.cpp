/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;

int n,k;
void solve(){
    cin >> n >> k;
    if(k > n){
        cout << 0 << '\n';
        return;
    }
    ll res = 1;
    for(int i = n ; i >= n - k + 1 ; i--)
        res = (res * i) % mod;
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3