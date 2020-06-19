/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m;
vector <int> a[20];
bool vis[20];

bool DFS(int u,int cnt){
    // đỉnh bằng n thì return true
    if(cnt == n)        
        return true;
    vis[u] = true;
    for(int v : a[u]){
        // DFS(v,cnt + 1)
        if(!vis[v] && DFS(v,cnt + 1)){
            return true;
        }
    }
    vis[u] = false;
    return false;
}

void solve(){
    cin >> n >> m;
    // memset(a,0,sizeof(a));
    for(int i = 0 ; i <= 20; i++){
        a[i].clear();
    }
    memset(vis,false,sizeof(vis));
    for(int i = 0,x,y ; i < m ; i++){
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    //
    int flag = 0;
    for(int i = 1 ; i <= n ; i++){
        if(DFS(i,1)){
            flag = 1;
            break;
        }
    }
    cout << flag << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)