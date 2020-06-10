/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,k;

void solve(){
    cin >> n >> k;
    set_vect(a,n);
    sort(all(a));
    ll res = 0;
    for(int i = 0 ; i < n; i++){
        res += i - (upper_bound(a.begin(), a.begin() + i, a[i] - k ) - a.begin());
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)