/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

const int N = 2002;

string s;

int lcs(string &s,string &x){
    int n = s.length(), m = s.length();
    s = ' ' + s;
    x = ' ' + x;
    vector <vector<int>> dp (n + 1, vector <int> (m + 1 , 0));
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            if(s[i] == x[j])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else 
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][m];
}
void solve(){
    cin >> s;
    string x = s;
    reverse(all(x));
    cout << lcs(s,x);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3