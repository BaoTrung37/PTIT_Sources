/*

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m,x,y;
vector <int> a[1004];
bool vis[1004];
// reset mảng
void reset(){
    memset(vis,0,sizeof(vis));
    for(int i = 1 ; i <= n ; i++)
        a[i].clear();
}
// nhập
void init(){
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++){
        cin >> x >> y;
        a[x].push_back(y);
    }
}
/*
gọi lại hàm đệ quy DFS để kiểm tra từng cặp cạnh trong stack
*/
bool DFS(int u,int p){
    vis[u] = true;
    for(auto v : a[u]){
        if(vis[v] == 0){
            // gọi lại DFS
            if(DFS(v,u))
                return true;
        }
        else if(v != p)
            return true;
    }
    return false;
}
// kiếm tra chu trình
bool Cyclic(){
    for(int i = 1; i <= n ; i++){
        if(!vis[i]){
            if(DFS(i,-1))
                return  true;
        }
    }
    return false;
}

void solve(){
    reset();
    init();
    if(Cyclic()) cout << "YES";
    else cout << "NO";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)