/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e2 + 5;
const int INF = 1e9 + 5;

int n,m,start;

struct edeg{
    int u,v,w;
};

vector <edeg> a;
int dist[N];
int res[N][N];

void input(){
    cin >> n >> m >> start;
    memset(res,0,sizeof(res));
    for(int i = 0 ; i <= n ; i++)
        dist[i] = INF;
    a.clear();

    for(int i = 0 ,x,y,z; i < m ; i++){
        edeg tmp;
        cin >> tmp.u >> tmp.v >> tmp.w; 
        a.push_back(tmp);
    }
}
bool CT_Am(){
    for(int i = 0 ; i < a.size() ; i++){
        int u = a[i].u;
        int v = a[i].v;
        int w = a[i].w;
        if(dist[v] > dist[u] + w)
            return false;
    }
    return true;
}
void solve(){
    dist[start] = 0;
    for(int j = 1 ; j < n ; j++){
        for(int i = 0 ; i < a.size() ; i++){
            int u = a[i].u;
            int v = a[i].v;
            int w = a[i].w;
            if(dist[v] > dist[u] + w)
                dist[v] = dist[u] + w;
        }
    }
    if(CT_Am() == false){
        cout << -1;
    }
    else{
        for(int i = 1 ; i <= n ; i++){
            if(dist[i] == INF) cout << "INFI ";
            else cout << dist[i] << ' ';
        }
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){input();solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)