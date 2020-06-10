//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n,m;
void solve(){
    cin >> n >> m;
    int x;
    if(n % 2 == 0) x = n / 2;
    else x = n / 2 + 1;
    for(int i = x ; i <= n ; i++){
        if(i % m == 0){
            cout << i;
            return;
        }
    }
    cout << -1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;// cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3