//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
const int mod = 1e9+7;
using namespace std;
int n,m,a[1000][1000],F[1000][1000];
void input(){
    cin >> n >> m;
    for(int i = 1; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin >> a[i][j];
}

void solve(){
    int nmax;
    for(int i = 1 ; i <= n; i++)
        F[1][i] = a[i][1];
    for(int j = 2 ; j <= m ; j++){
        for(int i = 1; i <= n ; i++){
            F[j][i] = a[i][j] + max( F[j-1][i-1],  max( F[j-1][i] , F[j-1][i+1] ) );
        }
    }
    nmax = F[m][1];
    for(int i = 2 ; i <= m ; i++)
        nmax = max(nmax,F[m][i]);
    cout << nmax;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){
        input();solve();
    }
    return 0;
}

// Code By CodeWar :3