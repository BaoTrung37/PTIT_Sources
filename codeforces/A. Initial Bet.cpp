//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int a,b,c,d,e;
void solve(){
    cin >> a >> b >> c >> d >> e;
    if((a + b + c + d + e) % 5 == 0 && (a + b + c + d + e) != 0)
        cout << (a + b + c + d + e) / 5;
    else cout << -1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3