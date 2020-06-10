/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;


int n,m,u;
vector <int> a[10004];
bool vis[100004];
void BFS(int u){
    vis[u] = true;
    queue <int> q;
    q.push(u);
    while(!q.empty()){
        int s = q.front(); q.pop();
        cout << s << ' ';
        for(auto v : a[s]){
            if(! vis[v]){
                q.push(v);
                vis[v] = true;
            }
        }
    }
}
void solve(){
    cin >> n >> m >> u;
    memset(vis,false,sizeof(vis));
    //
    for(int i = 0, x , y ; i < m ;i++){
        cin >> x >> y;
        a[x].push_back(y);
    }
    //
    BFS(u);
    for(int i = 0 ; i <= n ; i++){
        a[i].clear();
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)