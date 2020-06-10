/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m;
string s;
vector <int> a[10004];
bool vis[100004];
void DFS(int u){
    vis[u] = true;
    for(int i = 0 ; i < a[u].size() ; i++){
        if(!vis[a[u][i]]){
            DFS(a[u][i]);
        }
    }
}
bool check(){
    for(int i = 1; i <= n ; i++)
        if(vis[i] == false)
            return false;
    return true;
}
void reset(){
    memset(vis,false,sizeof(vis));
    for(int i = 0 ; i <= n ; i++){
        a[i].clear();
    }
}
void solve(){
    cin >> n >> m;
    reset();
    //
    for(int i = 0, x,y ; i < m ;i++){
        cin >> x >> y;
        a[x].push_back(y);
    }
    //
    for(int i = 1; i <= n ; i++){
        memset(vis,false,sizeof(vis));
        DFS(i);
        if(!check()){
            cout << "NO\n";
            return; 
        }
    }
    cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)