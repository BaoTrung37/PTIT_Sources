/*
https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/
*/
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

int n,m;
int mstSet[N];  // kiểm tra đỉnh được duyệt
int dist[N];    // trọng số tại đỉnh
int parent[N];  // cha của đỉnh 
int a[N][N];    

int findKey(){
    // tìm đỉnh chưa xét có trọng số nhỏ nhất 
    int minn = INF,min_index;
    for(int i = 1 ; i <= n ; i++){
        if(mstSet[i] == false && dist[i] < minn){
            minn = dist[i];
            min_index = i;
        }
    }
    return min_index;
}

void input(){
    cin >> n >> m;
    for(int i = 0 ; i <= n ; i++){
        dist[i] = INF;
        mstSet[i] = false;
    }
    memset(a,0,sizeof(a));
    for(int i = 0,x,y,z; i < m ; i++){
        cin >> x >> y >> z;
        a[x][y] = z;
        a[y][x] = z;
    }
}

void solve(){
    parent[1] = -1;
    dist[1] = 0;
    // có n - 1 cạnh duyệt n - 1 lần 
    for(int i = 0 ; i < n - 1; i++){
        int u = findKey();
        mstSet[u] = true;
        // duyệt các đỉnh kề với u 
        for(int v = 1 ; v <= n ; v++){
            if(a[u][v] && mstSet[v] == false && a[u][v] < dist[v]){
                parent[v] = u;
                dist[v] = a[u][v];
            }
        }
    }
    ll ans = 0;
    for(int i = 2 ; i <= n ; i++){
        ans += a[i][parent[i]];
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){input();solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)