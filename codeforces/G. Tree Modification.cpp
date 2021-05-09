/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int nmax = 200005;

int n,s[2];
vector <int> adj[nmax];
void dfs(int u = 0, int p = -1,int c = 0){
    ++s[c];
    for(int v: adj[u]){
        if(v^p){
            dfs(v,u,c^1);
        }
    }
}
void solve(){
    cin >> n;
    for(int i = 1 ,u,v ; i < n ; i++){
        cin >> u >> v; --u; --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs();
    cout << min(s[0],s[1]) -1; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)