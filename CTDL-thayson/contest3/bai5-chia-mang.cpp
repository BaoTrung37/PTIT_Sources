/**
 *    authur: Bao Trung (Koi` Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
int n,k;
void solve(){
    cin >> n >> k;
    k = max(k,n-k);
    set_vect(a,n);
    sort(all(a),greater<int>());
    ll res = 0,res1 = 0;
    for(int i = 0 ; i < n ; i++) res += a[i];
    for(int i = 0 ; i < k ; i++) res1 += a[i];
    cout << (res1 - (res - res1)) << '\n';
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3