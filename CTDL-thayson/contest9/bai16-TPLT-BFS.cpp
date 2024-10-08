/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;


int n,m;
vector <int> a[10004];
bool vis[100004];
void BFS(int u){
    vis[u] = true;
    queue <int> q;
    q.push(u);
    while(!q.empty()){
        int s = q.front(); q.pop();
        for(int i = 0 ; i < a[s].size() ;i++){
            if(! vis[a[s][i]]){
                q.push(a[s][i]);
                vis[a[s][i]] = true;
            }
        }
    }
}
void solve(){
    cin >> n >> m;
    memset(vis,false,sizeof(vis));
    for(int i = 0 ; i <= n ; i++){
        a[i].clear();
    }
    //
    for(int i = 0, x , y ; i < m ;i++){
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    //
    int res = 0;
    for(int i = 1; i <= n ; i++){
        if(vis[i] == false){
            BFS(i);
            res++;
        }
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)