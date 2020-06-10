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
    memset(vis,false,sizeof(vis));
    for(int i = 0 ; i <= n ; i++)
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
bool DFS(int u){
    stack <int> st;
    st.push(u);
    vis[u] = true;
    while(st.size() > 0){
        int s = st.top(); st.pop();
        for(auto v : a[s]){
            if(!vis[v]){
                vis[v] = true;
                st.push(s);
                st.push(v);
                break;
            }
            else if(v == u) return true;
        }
    }
    return false;
}
// kiếm tra chu trình
void Cyclicsci(){
    for(int i = 1 ; i <= n ; i++){ 
        memset(vis,false,sizeof(vis));
        if(DFS(i)){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
void solve(){
    reset();
    init();
    Cyclicsci();
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)