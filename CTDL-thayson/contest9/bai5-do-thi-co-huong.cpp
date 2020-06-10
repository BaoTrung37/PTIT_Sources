/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m,x,y;
vector <vector<int>> a;
void solve(){
    a.clear();
    cin >> n >> m;
    a.resize(n + 1);
    for(int i = 0 ; i < m ; i++){
        cin >> x >> y;
        a[x].push_back(y);
    }
    for(int i = 1 ; i <= n ; i++){
        cout << i << ": ";
        sort(a[i].begin(),a[i].end());
        for(auto u : a[i]){ 
            cout << u << ' ';
        }
        cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)