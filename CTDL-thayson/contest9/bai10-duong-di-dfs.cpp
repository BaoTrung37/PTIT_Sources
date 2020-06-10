/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m,u,v;
string s;
vector <int> a[10004];
bool vis[100004];
int check[100004];
void DFS(int u){
    vis[u] = true;
    for(int i = 0 ; i < a[u].size() ; i++){
        if(vis[a[u][i]] == false){
            check[a[u][i]] = u;
            DFS(a[u][i]);
        }
    }
}
void duong_di(int x,int y){
    if(check[y] == 0){
        cout << -1;
    }
    else{
        vector <int> res;
        int tmp = y;
        res.push_back(tmp);
        while(check[tmp] != x){
            res.push_back(check[tmp]);
            tmp = check[tmp];
        }
        cout << x << ' ';
        for(int i = res.size() - 1 ; i >= 0 ; i--)
            cout << res[i] << ' ';
    }
}
void solve(){
    cin >> n >> m >> u >> v;
    memset(vis,false,sizeof(vis));
    memset(check,0,sizeof(check));
    
    for(int i = 0, x,y ; i < m ;i++){
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    //
    DFS(u);
    duong_di(u,v);
    for(int i = 0 ; i <= n ; i++){
        a[i].clear();
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)