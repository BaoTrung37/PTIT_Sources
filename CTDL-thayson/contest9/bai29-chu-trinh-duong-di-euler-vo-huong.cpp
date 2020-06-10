/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m,x,y;
vector <int> a[1004];
bool vis[1004];
void init(){
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++){
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}
void reset(){
    memset(vis,false,sizeof(vis));
    for(int i = 0 ; i <= n ; i++)
        a[i].clear();
}
void DFS(int u){
    vis[u] = true;
    for(auto v : a[u]){
        if(!vis[v]){
            DFS(v);
        }
    }
}
bool Lien_thong(){
    for(int i = 1 ; i <= n ; i++)
        if(vis[i] == false && a[i].size() > 0)
            return false;
    return true;
}
int Check_Deg(){
    int le = 0;
    for(int i = 1 ; i <= n ; i++){
        if(a[i].size() & 1)
            le++;
    }
    if(le > 2) return 0;
    else if(le == 0) return 2;
    else if(le == 2) return 1;
}
void solve(){
    reset();
    init();
    DFS(1);
    int kt = Check_Deg();
    if(Lien_thong()){
        cout << kt;
    }
    else{
        cout << 0;
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