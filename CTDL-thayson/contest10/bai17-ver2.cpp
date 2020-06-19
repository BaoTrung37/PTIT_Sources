/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e2 + 5;
const int INF = 1e9 + 5;

int n,m;
int dp[N][N];
int a[N][N];

void input(){
    cin >> n >> m;
    memset(a,0,sizeof(a));
    for(int i = 1 ,x,z,y; i <= m ; i++){
        cin >> x >> y >> z;
        a[x][y] = z;
        a[y][x] = z;
    }
}

void Floy(){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(i == j) dp[i][j] = 0;
            else{
                if(a[i][j] == 0)
                    dp[i][j] = INF;
                else
                    dp[i][j] = a[i][j];
            }
        }
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(dp[i][j] > dp[i][k] + dp[k][j]){
                    dp[i][j] = dp[i][k] + dp[k][j];
                }
            }
        }
    }
}

void solve(){
    Floy();
    int q;
    cin >> q;
    while(q--){
        int u,v;
        cin >> u >> v;
        cout << dp[u][v] << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){input();solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)