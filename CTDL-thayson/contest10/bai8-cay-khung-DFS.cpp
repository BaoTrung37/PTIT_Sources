/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m,dinh;
vector <int> a[1004];
bool vis[1004];
vector <ii> kt;

void DFS(int u){
    stack <int> st;
    st.push(u);
    vis[u] = true;
    while(!st.empty()){
        int s = st.top(); st.pop();
        for(int v : a[s]){
            if(!vis[v]){
                vis[v] = true;
                st.push(s);
                st.push(v);
                kt.push_back({s,v});
                break;
            }
        }
    }
}

void solve(){
    cin >> n >> m >> dinh;
    kt.clear();
    for(int i = 1 ; i <= n ; i++){
        vis[i] = false;
        a[i].clear();
    }
    for(int i = 0, x,y; i < m ; i++){
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    DFS(dinh);
    bool OK = true; // có cây khung
    for(int i = 1 ; i <= n ; i++){
        if(!vis[i]){
            OK = false; // ko có cây khung
            break;
        }
    }
    if(!OK){
        cout << -1 << '\n';
    }
    else{
        for(auto v : kt)
            cout << v .first << ' ' << v.second << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)