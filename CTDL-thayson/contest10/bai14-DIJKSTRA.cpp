/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int INF = 1e9+4;

vector <ii> G[1004];
int n,m,tt;
int dist[1004];


void dijkstra(int s){
    priority_queue <ii,vector <ii>,greater<ii>> q;
    q.push({0,s});
    dist[s] = 0;
    while(q.size()){
        int u = q.top().second; q.pop();
        for(auto tmp : G[u]){
           int v = tmp.first;
           int w = tmp.second;
           if(dist[v] > dist[u] + w){      
                dist[v] = dist[u] + w;
                q.push({dist[v],v});
           }
        }
    }
    for(int i = 1 ; i <= n ; i++)
        cout << dist[i] << ' ';
    cout << '\n';
}

void solve(){
    cin >> n >> m >> tt;
    for(int i = 0 ; i <= n ; i++)
        G[i].clear(),dist[i] = INF;
    for(int i = 0, a,b,c ; i < m ; i++){
        cin >> a >> b >> c;
        G[a].push_back({b,c});
        G[b].push_back({a,c});
    }
    dijkstra(tt);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)