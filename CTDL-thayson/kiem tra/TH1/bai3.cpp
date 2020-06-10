/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
ll dp [100004];
void solve(){
    cin >> n;
    memset(dp,0,sizeof(dp));
    dp[1] = 0, dp[2] = dp[3] = 1;
    for(int i = 4 ; i <= n ; i++){
        if (i % 2 == 0 && i % 3 == 0)
            dp[i] = min(dp[i / 2], min(dp[i / 3], dp[i - 1])) + 1;
        else if(i % 3 == 0){
            dp[i] = min(dp[i - 1], dp[i / 3]) + 1;
        }
        else if(i % 2 == 0)
            dp[i] = min(dp[i - 1],dp[i / 2]) + 1;
        else{
            dp[i] = dp[i - 1] + 1;
        }
    }
    for(int i = 1 ; i <= n ; i++)
        cout << "n = " << i << ": " <<dp[i] << '\n';
    cout << dp[n] << '\n';
}   

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)