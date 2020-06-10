/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m,u;
vector <vector <int>> a;
bool vis[100004];
void DFS(int u){
    cout << u << ' ';
    vis[u] = true;
    for(int i = 0 ; i < a[u].size() ; i++){
        if(!vis[a[u][i]] ){
            DFS(a[u][i]);
        }
    }
}
void solve(){
    a.clear();
    cin >> n >> m >> u;
    a.resize(n + 1);
    memset(vis,false,n + 1);
    for(int i = 0,x,y ; i < m ; i++){
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    //
    DFS(u);
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)