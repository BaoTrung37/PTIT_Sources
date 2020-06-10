/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m,res;
int a[1005][1005];
int vis[1005][1005];
void bfs(){
    int cnt = 0;
    queue <ii> q;
    q.push({1,1});
    vis[1][1] = 0;
    while(!q.empty()){
        ii s = q.front() ; q.pop();
        if(vis[s.first][s.second + a[s.first][s.second]] == -1){
            vis[s.first][s.second + a[s.first][s.second]] = vis[s.first][s.second] + 1;
            q.push({s.first,s.second + a[s.first][s.second]});
        }
        if(vis[s.first + a[s.first][s.second]][s.second] == -1){
            vis[s.first  + a[s.first][s.second]][s.second] = vis[s.first][s.second] + 1;
            q.push({s.first  + a[s.first][s.second],s.second});
        }
        if(vis[n][m] != -1){
            return;
        }
    }
}
void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin >> a[i][j];
    memset(vis,-1,sizeof(vis));
    res = 0;
    bfs();
    cout << vis[n][m] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)