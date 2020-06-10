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
int n;
void solve(){
    cin >> n;
    ll a = LLONG_MAX;
    ll b = LLONG_MIN;
    for(int i = 0 ; i < n ; i++){
        ll x ;
        cin >> x;
        if(i){
            a = min (a , x - b);
        }
        b = max(b,x);
    }
    cout << (a >= 0 ? 0 : (ll)(log2(-a)) + 1) << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3