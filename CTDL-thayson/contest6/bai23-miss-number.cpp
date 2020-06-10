/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
void solve(){
    cin >> n;
    int a[n + 2];
    ll sum = 0;
    for(int i = 0 ; i < n - 1 ; i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << (1LL * n * (n + 1) / 2) - sum << '\n';
    
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)in