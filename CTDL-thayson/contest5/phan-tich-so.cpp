/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int nmax = 100006;
int n;
ll dp[nmax][200];
void solve(){
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        dp[0][i] = 0;
    dp[0][0] = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j <= n ; j++){
            if(j < i)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] + dp[i][j - i];
        }
    }
    cout << dp[n][n];
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3