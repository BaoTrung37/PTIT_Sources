/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m,x,y;
vector <int> a[1004];
vector <int> b[1004];
bool vis[1004];
void init(){
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++){
        cin >> x >> y;
        a[x].push_back(y);
        
        b[x].push_back(y);
        b[y].push_back(x);
    }
}
void reset(){
    memset(vis,false,sizeof(vis));
    for(int i = 0 ; i <= n ; i++)
        a[i].clear(),b[i].clear();
}
void DFS(int u){
    vis[u] = true;
    for(auto v : b[u]){
        if(!vis[v]){
            DFS(v);
        }
    }
}
bool Lien_thong(){
    for(int i = 1 ; i <= n ; i++)
        if(vis[i] == false)
            return false;
    return true;
}
int Check_Deg(){
    int degra[n+1] = {0},degvao[n+1] = {0};
    for(int i = 1 ; i <= n ; i++){
        for(auto v: a[i]){
            degvao[i]++;
            degra[v]++;
        }
    }
    for(int i = 1 ; i <= n ; i++)
        if(degra[i] != degvao[i])
            return 0;
    return 1;
}
void solve(){
    reset();
    init();
    DFS(1);
    if(Lien_thong()){
        cout << Check_Deg();
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