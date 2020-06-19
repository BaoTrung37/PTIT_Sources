/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m;
char a[505][505];
int vis[505][505];
int x_1,x_2,y_1,y_2;

bool BFS(int xx,int yy){
    queue <ii> q;
    q.push({xx,yy});
    while(!q.empty()){
        ii s = q.front(); q.pop();
        int x = s.first;
        int y = s.second;
        int cnt = vis[x][y] + 1;
        //
        if(cnt > 3) continue;
        if(vis[x_2][y_2] != -1 && vis[x_2][y_2] <= 2) return true;
        //
        for(int i = x + 1 ; i <= n && a[i][y] != '*'; i++){
            if(vis[i][y] == -1 && a[i][y] != '*'){
                vis[i][y] = cnt;
                q.push({i,y});
            }
        }
        //
        for(int i = x - 1 ; i >= 1 && a[i][y] != '*'; i--){
            if(vis[i][y] == -1 && a[i][y] != '*'){
                vis[i][y] = cnt;
                q.push({i,y});
            }
        }
        //
        for(int i = y + 1 ; i <= m && a[x][i] != '*'; i++){
            if(vis[x][i] == -1 && a[x][i] != '*'){
                vis[x][i] = cnt;
                q.push({x,i});
            }
        }
        //
        for(int i = y - 1 ; i >= 1 && a[x][i] != '*'; i--){
            if(vis[x][i] == -1 && a[x][i] != '*'){
                vis[x][i] = cnt;
                q.push({x,i});
            }
        }
    }
    return false;
}

void solve(){
    cin >> n >> m;
    memset(vis,-1,sizeof(vis));
    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cin >> a[i][j];
            if(a[i][j] == 'S'){
                x_1 = i; y_1 = j;
            }
            if(a[i][j] == 'T'){
                x_2 = i; y_2 = j;
            }
        }
    }
   
    if(BFS(x_1,y_1)) cout << "YES";
    else cout << "NO";
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <= m ; j++)
    //         cout << vis[i][j] <<' ';
    //     cout << '\n'; 
    // }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)