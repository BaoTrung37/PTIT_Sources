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
vector <ii> ans,res;
bool vis[1004];
int x,y;

void BFS(int u){
    vis[u] = true;
    queue <int> q;
    q.push(u);
    while(!q.empty()){
        int s = q.front(); q.pop();
        for(int i = 0 ; i < a[s].size() ;i++){
            int v = a[s][i];
            if((x == s && y == v) || (x == v && y == s))
                continue;
            else if(! vis[v]){
                q.push(v);
                vis[v] = true;
            }
        }
    }
}
bool check(){
    for(int i = 1; i <= n ; i++)
        if(vis[i] == false)
            return false;
    return true;
}
void reset(){
    ans.clear();
    res.clear();
    for(int i = 0 ; i <= n ; i++){
        a[i].clear();
    }
}
void canh_cau(){
    for(int i = 0 ; i < ans.size() ; i++){
        memset(vis,false,sizeof(vis));
        x = ans[i].first;
        y = ans[i].second;
        BFS(1);
        if(!check()){
            if(x < y)
                res.push_back({x,y});
            else res.push_back({y,x});
        }
    }
    sort(all(res));
    for(auto z : res)
        cout << z.first << ' ' << z.second << ' ';
}
void solve(){
    cin >> n >> m;
    reset();
    //
    for(int i = 0 ; i < m ; i++){
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
        ans.push_back({x,y});
    }
    //
    canh_cau();
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)