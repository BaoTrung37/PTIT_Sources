//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
i64 a[3];
void solve(){
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a + 3);
    if(a[1] >= a[2] || a[1] + a[0] >= a[2]) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3