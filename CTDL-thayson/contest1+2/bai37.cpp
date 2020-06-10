/**
 *    authur: Bao Trung (Koi` Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n,m,vis[100][100],MAX;
void reset(){
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < n ; j++){
            //a[i][j] = 0;
            vis[i][j] = 0;
        }
    MAX = 0;
}
void DFS(int u,int cnt){
    MAX = max(MAX,cnt);
    for(int i = 0 ; i < n ; i++){
        if(vis[u][i]){
            vis[u][i] = 0;
            vis[i][u] = 0;
            DFS(i,cnt + 1);
            vis[u][i] = 1;
            vis[i][u] = 1;
        }
    }
}
void solve(){
    cin >> n >> m;
    reset();
    for(int i = 0,x,y; i < m ; i++){
        cin >> x >> y;
        //a[x][y] = 1;
        vis[x][y] = 1;
        vis[y][x] = 1;
    }
    for(int i = 0 ; i < n ; i++)
        DFS(i,0);
    cout << MAX << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3