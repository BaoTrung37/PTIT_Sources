/*
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m;
vector <int> a[1004];
int color[1004];

bool BFS(int u){
    queue <int> q;
    q.push(u);
    color[u] = 1;
    while(q.size()){
        int s = q.front(); q.pop();
        for(auto v : a[s]){
            if(v == s)
                return false;
            if(color[v] == -1){
                color[v] = 1 - color[s];
                q.push(v);
            }
            else if(color[v] == color[s])
                return false;
        }
    }
    return true;
} 
bool check(){
    for(int i = 1 ; i <= n ; i++){
        if(color[i] == -1){
            if(BFS(i) == false)
                return false; 
        }
            
    }
    return true;
}
void solve(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++){
        a[i].clear();
        color[i] = -1;
    }
    for(int i = 0,x,y; i < m ; i++){
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    if(check()) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)