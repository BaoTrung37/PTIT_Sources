/*
https://practice.geeksforgeeks.org/problems/m-coloring-problem/0
    sử dụng 1 mảng color để đánh dấu màu cho đỉnh
    duyệt hết đỉnh, kiểm tra màu nào có thể tô thì to màu cho đỉnh đó
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m,color_;
vector <int> a[1004];
int color[1004];

void input(){
    cin >> n >> m >> color_ ;
    for(int i = 0 ; i <= n ; i++)
        a[i].clear();
    memset(color,0,sizeof(color));
    for(int i = 0, x, y; i < m ; i++){
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}
// kiểm tra tại đỉnh u có đỉnh nào trùng màu
bool check(int u, int color_){
    for(auto v : a[u]){
        if(color_ == color[v])
            return false;
    }
    return true;
}
bool DFS(int u){
    // tô đủ n đỉnh thì dừng lại
    if(u == n + 1) return true;
    for(int i = 1 ; i <= color_ ; i++){
        if(check(u,i)){
            // đánh dấu màu cho đỉnh
            color[u] = i;
            // gọi lại dfs
            if(DFS(u + 1)) return true;
            color[u] = 0;
        }
    }
    return false;
}
void solve(){
    if(DFS(1)) cout << "YES";
    else cout << "NO";
    cout << '\n';
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){input();solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)