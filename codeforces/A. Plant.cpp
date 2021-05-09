/*  
    4 ^ i + 2 ^ i
    -----------
        2
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
#define db(x) cerr << #x << " = "  << (x) << ' ';
const int nmax = 10005;
const int mod = 1e9 +7;

ll n;
ll pow2(ll n,ll k){
    if(k == 0) return 1LL;
    ll x = pow2(n,k / 2);
    if(x % 2 == 0) return x * x % mod;
    return (x * x % mod) * n % mod;
}
void solve(){
    cin >> n;
    if(n == 0){
        cout << 1;
    }
    else {
        ll x = pow2(2,n);
        cout << (x * (x + 1) / 2) % mod;
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)