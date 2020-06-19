/*
    sử dụng dijsktra để tính khoảng cách
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define tp tuple<int,int,int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

const int N =  505;
const int inf = 1e9 + 5;

int n,m;
int a[N][N];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dist[N][N];

priority_queue <tp,vector<tp>,greater<tp>> q;

bool check(int x,int y){
    return (1 <= x && x <= n && 1 <= y && y <= m);
}

void dijkstra(int x,int y){
    dist[x][y] = a[x][y];
    q.push({dist[x][y],x,y});
    while(q.size()){
        tp tmp = q.top(); q.pop();
        x = get<1>(tmp);
        y = get<2>(tmp);
        int w = get<0>(tmp);
        for(int i = 0 ; i < 4 ; i++){
            int u = x + dx[i];
            int v = y + dy[i];
            if(check(u,v)){
                if(dist[u][v] > a[u][v] + w){
                    dist[u][v] = a[u][v] + w;
                    q.push({dist[u][v],u,v});
                }
            }
        }
    }
}

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin >> a[i][j],dist[i][j] = inf;
    dijkstra(1,1);
    cout << dist[n][m] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)