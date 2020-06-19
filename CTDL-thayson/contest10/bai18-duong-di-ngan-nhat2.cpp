/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define pll pair<ll,ll>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e5 + 5;
const ll inf = 1e15 + 5;
int n,m;
priority_queue <pll,vector<pll>,greater<pll>> q;
vector <ii> a[N];
ll cnt[N];
ll dist[N];

void input(){
    cin >> n >> m;
    for(int i = 0,x,y,z; i < m ; i++){
        cin >> x >> y >> z;
        a[x].push_back({y,z});
        a[y].push_back({x,z});
    }
    for(int i = 0 ; i <= n ; i++){
        cnt[i] = 0;
        dist[i] = inf;
    }
}
void Dijkstra(int u){
    cnt[u] = 1;
    dist[u] = 0;
    q.push({0,u});
    while(!q.empty()){
        ll minn = q.top().X;
        u = q.top().Y;
        q.pop();
        for(auto tmp : a[u]){
            int v = tmp.X;
            int w = tmp.Y;
            if(dist[v] == minn + w){
                cnt[v] += cnt[u];
            }
            else if(dist[v] > minn + w){
                dist[v] = minn + w;
                cnt[v] = cnt[u];
                q.push({dist[v],v});
            }
        }
    }
}
void solve(){
    Dijkstra(1);
    cout << dist[n] << ' ' << cnt[n] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){input();solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)