/*
    n = 3, k = 7
    1 2 3 4 5 6 7 8 9 10 11
    1 2 x 3 4 x 5 6 x 7  8
    lặp k / (n - 1)
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,k;
void solve(){
    cin >> n >> k;
    cout << k + (k - 1) / (n - 1) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)