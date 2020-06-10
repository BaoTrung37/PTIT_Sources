//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,m,u;
vector < vector<int> > a;
bool check[100005];
void input(){
    cin >> n >> m >> u;
    a.resize(n+1);
    for(int i = 0 ; i < m; i++){
        int x,y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(int i = 1 ; i <= n ; i++) check[i] = true;
}
void DFS(int u){
    check[u] = false;
    cout << u << ' ';
    for(int i  = 0 ; i < a[u].size() ;i++)
        if(check[ a[u][i] ] == true)
            DFS(a[u][i]);
}
void solve(){
    DFS(u);
    cout << endl;
    a.clear();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        input();solve();
    }
    return 0;
}

// Code By CodeWar :3   