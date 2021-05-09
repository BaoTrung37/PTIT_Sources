/*
    32 256
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e5 + 5;

int k2,k3,k5,k6;
void solve(){
    cin >> k2 >> k3 >> k5 >> k6;
    int k = min ({k2,k5,k6});
    int l = min ({k3, k2 - k});
    cout << 256 * k + 32 * l;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1;// cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)