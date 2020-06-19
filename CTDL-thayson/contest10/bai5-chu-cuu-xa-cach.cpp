/*
    0 0  0
    0 2 | 3
        |--   
    0 0 |1

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 300;

int n,m,k;
bool pos[N][N];
vector <ii> block[N][N];
int del = 0,res = 0;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
bool vis[N][N];

bool inside(int x,int y){
    return (1 <= x && x <= n && 1 <= y && y <= n);
}
bool check_block(int x,int y,ii tmp){
    for(auto v : block[x][y]){
        if(v == tmp)
            return false;
    }
    return true;
}
void BFS(ii u){
    
    queue <ii> q;
    q.push(u);
    vis[u.X][u.Y] = true; // đánh dấu đã đi qua
    pos[u.X][u.Y] = false; // xoá cừu
    int cnt = 1; 
    while(q.size()){
        ii s = q.front(); q.pop();  
        int x = s.first;
        int y = s.second;
        for(int i = 0 ; i < 4 ; i++){
            int u = x + dx[i];
            int v = y + dy[i];
            if(inside(u,v) && !vis[u][v] && check_block(x,y,ii(u,v))){
                vis[u][v] = true;
                q.push({u,v});
                if(pos[u][v]){
                    pos[u][v] = false;
                    cnt++;
                }
            }
        }
    }
    del += cnt;
    res += cnt * (k - del);
}
void init(){
    cin >> n >> k >> m;
    memset(vis,false,sizeof(vis));
    for(int i = 0 ,a,b,c,d; i < m ; i++){
        cin >> a >> b >> c >> d;
        block[a][b].push_back({c,d});
        block[c][d].push_back({a,b});
    }
    for(int i = 0,a,b; i < k ; i++){
        cin >> a >> b;
        pos[a][b] = true;
    }
}
void solve(){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(pos[i][j]){
                BFS(ii(i,j));
            }
        }
    }
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){init();solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)