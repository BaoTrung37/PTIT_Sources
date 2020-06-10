/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s1,s2;
int dp[1000][1000];
void solve(){
    cin >> s1 >> s2;
    memset(dp,0,sizeof(dp));
    for(int i = 0 ; i <= s1.length() ; i++){
        for(int j = 0 ; j <= s2.length() ;j++){
            if(i == 0)
                dp[i][j] = j;
            else if(j == 0)
                dp[i][j] = i;
            else if(s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else{
                dp[i][j] = 1 + min(dp[i - 1][j] , min(dp[i - 1][j - 1] , dp[i][j - 1]));
            }
        }
    }
    cout << dp[s1.length()][s2.length()] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3







//https://www.geeksforgeeks.org/edit-distance-dp-5/
