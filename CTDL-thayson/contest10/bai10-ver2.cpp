/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e5 + 5;

int n,m;
struct edeg{
    int u,v,w;
};
vector <edeg> a;
struct DSU{
    vector <int> rank,parent;
    int n;
    DSU(int m){
        n = m; rank.resize(n + 1); parent.resize(n + 1);
    }
    void in(){
        for(int i = 0 ; i <= n ; i++){
            rank[i] = 0;
            parent[i] = i;
        }
    }
    int find(int i){
        return (parent[i] == i) ? i : parent[i] = find(parent[i]);
    }
    bool unionSet(int i,int j){
        int x = find(i);
        int y = find(j);
        if(x == y) return false;
        if(rank[x] == rank[y]) rank[x]++;
        if(rank[x] > rank[y]) parent[y] = x;
        else parent[x] = y;
        return true;
    }
};
DSU dsu = DSU(0);

void solve(){
    //
    cin >> n >> m;
    a.clear();
    for(int i = 0 ; i < m ; i++){
        edeg tmp;
        cin >> tmp.u >> tmp.v >> tmp.w;
        a.push_back(tmp);
    }
    //
    dsu = DSU(n); dsu.in();
    auto cmp = [](edeg a,edeg b){
        return a.w < b.w;
    };
    sort(all(a),cmp);
    //
    int res = 0;
    for(auto tmp : a){
        if(dsu.unionSet(tmp.u,tmp.v)){
            res += tmp.w;
        }
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)