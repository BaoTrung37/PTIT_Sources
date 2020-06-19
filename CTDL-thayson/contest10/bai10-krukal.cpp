/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m;
ll ans;
vector <pair<int,ii>> a;
int parent[1004];
int rankx[1004];

int findSet(int i){
    if(parent[i] != i)
        parent[i] = findSet(parent[i]);
    return parent[i];
}
void Unicon(int u,int v){
    if(rankx[u] == rankx[v]) rankx[u]++;
    if(rankx[u] < rankx[v]) parent[u] = v;
    else parent[v] = u;
}
void solve(){
    cin >> n >> m;
    a.clear();
    for(int i = 0,x,y,z; i < m ; i++){
        cin >> x >> y >> z;
        a.push_back({z,{x,y}});
    }
    for(int i = 1 ; i <= n ; i++){
        parent[i] = i;
        rankx[i] = 0;
    }
    sort(all(a));
    ans = 0;
    for(int i = 0; i < a.size() ;i++){
        int u = findSet(a[i].second.first);
        int v = findSet(a[i].second.second);
        if(u != v){
            Unicon(u,v);
            ans += a[i].first;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)