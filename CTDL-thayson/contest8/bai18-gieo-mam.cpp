/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define ii pair<int, int>
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int a[505][505];
int day[505][505];
int n,m;

bool check(int n,int m){
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            if(a[i][j] == 1) return 0;
    return 1;
}

void solve(){
    cin >> n >> m;
    queue <ii> q;
    memset(day,0,sizeof(day));
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= m ; j++){
            cin >> a[i][j];
            if(a[i][j] == 2){
                q.push({i,j});
            }
        }
    }       
    int h = 0;
    while(!q.empty()){
        ii s = q.front(); q.pop();
        for(int i = 0 ; i < 4 ; i++){
            int nx = s.first + dx[i];
            int ny = s.second + dy[i];
            if(a[nx][ny] == 1){
                a[nx][ny] = 2;
                day[nx][ny] = day[s.first][s.second] + 1;
                h = max(h,day[nx][ny]);
                q.push({nx,ny});
            }
        }
    }
    if(check(n,m))
        cout << h;
    else cout << -1;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)