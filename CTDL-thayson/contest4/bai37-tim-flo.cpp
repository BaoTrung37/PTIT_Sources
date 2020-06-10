/**
 *    authur: Bao Trung (Koi` Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
ll n,k;
void solve(){
    cin >> n >> k;
    set_vect(a,n);
    sort(all(a));
    if(k < a[0]) cout << -1  << '\n';
    else{
        int x = lower_bound(all(a),k) - a.begin();
        if(a[x] == k) cout << x + 1 << '\n';
        else if(a[x] > k) cout << x << '\n';
        else cout << n << '\n'; 
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3