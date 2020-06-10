/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m;
void solve(){
    cin >> n >> m;
    vector <vector<int>> a;
    a.resize(n + 1);
    for(int i = 0, x , y; i < m ;i++){
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(int i = 1 ; i <= n ; i++){
        sort(a[i].begin(),a[i].end());
        cout << i << ": ";
        for(int j = 0 ; j < a[i].size() ; j++)
            cout << a[i][j] << ' ';
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