//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,m,a[1001][1001];
i64 F[1001][1001];
void solve(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++){
            cin >> a[i][j];
            F[i][j] = 0;
        }
    F[1][1] = a[1][1];
    for(int i = 2; i <= m ; i++) F[1][i] = F[1][i - 1] + a[1][i];
    for(int i = 2; i <= n ; i++) F[i][1] = F[i - 1][1] + a[i][1];
    for(int i = 2 ; i <= n ; i++){
        for(int j = 2 ; j <= m ; j++){
            F[i][j] = min(F[i - 1][j] , min (F[i-1][j-1] , F[i][j-1])) + a[i][j] ;
        }
    }
    cout << F[n][m] << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3a