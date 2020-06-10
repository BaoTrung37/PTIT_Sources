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
    int x = lower_bound(all(a), k) - a.begin();
    int y = upper_bound(all(a),k) -  a.begin();
    if(y - x == 0) cout << -1 << '\n';
    else cout << y - x << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)