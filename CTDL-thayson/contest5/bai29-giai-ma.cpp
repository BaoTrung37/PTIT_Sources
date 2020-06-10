/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s;
int dp[1000];
void solve(){
    cin >> s;
    memset(dp,0,sizeof(dp));
    if(s[0] == '0'){
        cout << 0 << '\n';
        return;
    }
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= s.length(); i++){
        dp[i] = 0;
        if(s[i - 1] != '0') dp[i] = dp[i - 1];
        if(s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] < '7'))
            dp[i] = dp[i] + dp[i - 2];
    }
    cout << dp[s.length()] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3