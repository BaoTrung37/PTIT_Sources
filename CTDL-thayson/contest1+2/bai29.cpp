/**
 *    authur: Bao Trung (Koi Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n,m,res,a[1000][1000],vis[1000][1000];
void Try(int i,int j,int &res){
    vis[i][j] = true;
    if(i == n - 1 && j == m - 1)
        res++;
    if(!vis[i + 1][j] && i < n && j < m){
        vis[i + 1][j] = true;
        Try(i + 1,j,res);
        vis[i + 1][j] = false;
    }
    if(!vis[i][j + 1] && i < n && j < m){
        vis[i][j + 1] = true;
        Try(i,j + 1,res);
        vis[i][j + 1] = false;
    }

}
void solve(){
    cin >> n >> m;
    res = 0;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
            vis[i][j] = false;
        }
    Try(0,0,res); 
    cout << res << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3