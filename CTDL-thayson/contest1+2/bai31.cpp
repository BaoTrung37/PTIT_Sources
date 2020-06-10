/**
 *    authur: Bao Trung (Koi` Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
int k,n,m;
int dx[] = {0,-1,-1,-1,0,1,1,1};
int dy[]= {1,1,0,-1,-1,-1,0,1};
vector <string> s,res;
char c[10][10];
bool vis[10][10];
// kiếm tra x,y có bên trong ma trận ko
bool check(int x,int y){
    if(x >= 1 && x <= n && y >= 1 && y <= m && vis[x][y] == true)
        return true;
    return false;
}
void DFS(int x,int y,string tmp){
    vis[x][y] = false;
    tmp.push_back(c[x][y]);
    for(auto i : s)
        if(tmp == i){
            res.push_back(tmp);
            break;
        }    
    for(int i = 0 ; i < 8 ; i++){
        int x_next = x + dx[i];
        int y_next = y + dy[i];
        if(check(x_next,y_next))
            DFS(x_next,y_next,tmp);
    }
    vis[x][y] = true;
    tmp.pop_back();
}
void solve(){
    // in put
    cin >> k >> n >> m;
    s.clear();  res.clear();
    s.resize(k);
    for(auto &i : s) cin >> i;
    for(int i = 1; i <= n ; i++)
        for(int j = 1; j <= m; j++)
            cin >> c[i][j] , vis[i][j] = true;
    // chạy chương trình
    string tmp ="";
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            DFS(i,j,tmp);
        }
    }
    // output
    if(res.size() == 0){
        cout << "-1" << '\n';
    }
    else{
        for(auto i : res)
            cout << i << ' ';
        cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3