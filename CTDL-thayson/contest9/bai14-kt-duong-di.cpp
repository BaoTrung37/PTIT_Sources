/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m,test,x,y;
string s;
vector <int> a[10004];
bool vis[100004];

bool BFS(int u){
    queue <int> q;
    q.push(u);
    vis[u] = true;
    while(!q.empty()){
        int s = q.front(); q.pop();
        for(int i = 0 ; i < a[s].size() ; i++){
            int v = a[s][i];
            if(!vis[v]){
                if(v == y){
                    return true;
                }
                vis[v] = true;
                q.push(v);
            }
        }
    }
    return false;
}
void reset(){
    memset(vis,false,sizeof(vis));
}
void solve(){
    cin >> n >> m;
    for(int i = 0; i < m ;i++){
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    cin >> test;
    while(test--){
        reset();
        cin >> x >> y;
        if(BFS(x)) cout << "YES\n";
        else cout << "NO\n";
    }
    for(int i = 0 ; i <= n ; i++){
        a[i].clear();
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)