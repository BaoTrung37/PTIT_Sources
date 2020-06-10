/**
 *    authur: Bao Trung (idol tourist)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
ll pow2(ll n,ll k)  {return k ? pow2(n * n % mod,k >> 1) * (k & 1 ? n : 1) % mod : 1;}
ll dao(ll n){
    ll tmp = 0;
    while(n){
        tmp = tmp * 10 + n % 10;
        n /= 10;
    }
    return tmp;
}
ll pow1(ll n,ll k){
    if(k == 1) return n % mod;
    ll kt = pow1(n , k / 2);
    if(k % 2 == 0) return (kt * kt % mod);
    return (kt * kt % mod) * n % mod;
}
void solve(){
    ll n;
    cin >> n;
    ll x = dao(n);
    cout <<pow1(n,x) << '\n';
}

int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3