//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n,m,res = 0;
void solve(){
    cin >> n >> m;
    int g = __gcd(n,m);
    n = n / g; m = m / g;
    for(   ; m % 3 == 0 && m > n ; m /= 3, res++);
    for(   ; m % 2 == 0 && m > n ; m /= 2, res++);
    cout << ( m - n ? -1 : res);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3