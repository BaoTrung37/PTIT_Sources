//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;

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
    cout << res << endl;
    a.clear();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        input();solve();
    }
    return 0;
}

// Code By CodeWar :3