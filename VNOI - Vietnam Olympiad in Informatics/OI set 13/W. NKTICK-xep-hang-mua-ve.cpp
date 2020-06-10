/**
 *    authur: Bao Trung (Koi` Cute)
 * https://codeforces.com/group/FLVn1Sc504/contest/274825/problem/W
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=1;i<=n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
int n,f[60004],g[60004];
void solve(){
    cin >> n;
    set_arr(a,n);
    set_arr(b,n-1);
    f[1] = a[1];
    g[1] = 1 << 20;
    f[2] = a[1] + a[2];
    g[2] = b[1];
    for(int i = 3 ; i <= n ; i++){
        f[i] = min(f[i - 1],g[i - 1]) + a[i];
        g[i] = min(f[i - 2],g[i - 2]) + b[i - 1];
    }
    cout << min(f[n-1],g[n-1]);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3