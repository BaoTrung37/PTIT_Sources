/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s;
int dp[1002][1002];
int lcs(string s){
    memset(dp,0,sizeof(dp));
    int n = s.length();
    for(int i = 0 ; i  < n ; i++)
        dp[i][i] = 1;
    int res = 1;
    for(int k = 1 ; k < n ; k++){
        for(int i = 0 ; i < n - k ; i++){
            int j = i + k;
            if(s[i] == s[j] && k > 1)   dp[i][j] = dp[i + 1][j - 1];
            else if(s[i] == s[j] && k == 1) dp[i][j] = 1;
            else dp[i][j] = 0;
            if(dp[i][j] == 1) res = max(res, j - i + 1);
        }
    }
    return res;
}
void solve(){
    cin >> s;
    cout << lcs(s) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3