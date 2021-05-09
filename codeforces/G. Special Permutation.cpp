/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
void solve(){
    cin >> n;
    if (n < 4){
        cout << -1 << '\n';
        return;
    }
    int i;
    for(i = n ; i >= 1 ; i --)
        if(i & 1) cout << i << ' ';
    cout << "4 2 ";
    for(i = 6; i <= n ; i += 2)
        cout << i << ' ';
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)