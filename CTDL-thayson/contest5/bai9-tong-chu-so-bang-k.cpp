/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int nmax = 100006;
const int mod = 1e9 + 7;
int n,s;
int dp[102][1002];
int tim(int n,int sumC , int sum){
    int res = 0;
    if(sumC == sum) return 1; 
    if(n == 0) return 0;
    if(dp[n][sumC] != -1)  return dp[n][sumC];
    for(int i = 0 ; i <= 9 ; i++)
        res = (res + tim(n - 1, sumC + i, sum)) % mod;

    return dp[n][sumC] = res;
}
void solve(){
    cin >> n >> s;
    memset(dp,-1,sizeof(dp));
    int res = 0;
    for(int i = 1; i <= 9; i++){
        res = (res + tim(n - 1,i,s)) % mod;
    }
    cout << (res == 0 ? -1 : res) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3