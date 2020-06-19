/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m;
vector <vector <int>>a;
bool check[100005];
void input(){
    cin >> n >> m;
    a.resize(n+2);
    for(int i = 1 ; i <= m ; i++){
        int x , y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(int i = 1 ; i <= n ; i++) check[i] = false;
}
int DFS(int u){
    int res = 1;
    check[u] = true;
    for(int i = 0 ; i < a[u].size() ;i++){
        if(!check [a[u][i]] ){
            res += DFS(a[u][i]);
        }
    }
    return res;
}
void solve(){
    int res = 0;
    for(int i = 1 ; i <= n ; i++)
        if(check[i] == false)
            res = max (res , DFS(i));
    cout << res << '\n';
    a.clear();
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){input();solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)