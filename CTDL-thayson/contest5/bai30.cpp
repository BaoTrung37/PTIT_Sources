/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int dp[100002];
void in(){
    dp[0] = 0; dp[1] = 1;
    dp[2] = 2; dp[3] = 3;
    for(int i = 4 ; i <= 10000 ; i++){
        dp[i] = i;
        for(int j = 1 ; j <= ceil(sqrt(i)) ; j++){
            int x = j * j;
            if(x > i) break;
            else dp[i] = min(dp[i] , dp[i - x] + 1);
        }
    }
}
void solve(){
    int n;
    cin >> n;
    cout <<  dp[n] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    in();
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3