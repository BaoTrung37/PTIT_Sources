/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m;
string s;
vector <int> a[1004];
bool vis[1004],check;
int x,y;

void DFS(int u){
    vis[u] = true;
    for(auto v : a[u]){
        if(!vis[v]){
            DFS(v);
        }
    }
}

void Canh_cau(){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j < a[i].size() ; j++){
            int u = a[i][j];
            a[i].erase(a[i].begin() + j);
            DFS(i);
            check = true;
            for(int k = 1 ; k <= n ; k++)
                if(!vis[k]) check = false;
            if(check && (i < u)) cout << i << ' ' << u << ' ';
            a[i].insert(a[i].begin() + j,u);
            memset(vis,false,sizeof(vis));  
        }
    }
}

void solve(){
    for(int i = 0 ; i <= n ; i++)   a[i].clear();
    memset(vis,false,sizeof(vis));

    cin >> n >> m;
    for(int i = 0,x,y ; i < m ; i++){
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)