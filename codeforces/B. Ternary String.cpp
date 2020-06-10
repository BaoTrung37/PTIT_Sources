/*
    cập nhật vị trị trí 1,2,3 rồi kiếm tra độ dài tại các vị trí
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s;
int dp[4];
void solve(){
    cin >> s;
    memset(dp,-1,sizeof(dp));
    int res = 0;
    for(int i = 0 ; i < s.length() ; i++){
        dp[s[i] - '0'] = i;
        if(dp[1] > -1 && dp[2] > -1 && dp[3] >-1){
            if(res == 0){
                int max1 = max(dp[1],max(dp[2],dp[3]));
                int min1 = min(dp[1],min(dp[2],dp[3]));
                res = max(0, max1 - min1 + 1);
            }
            else{
                int max1 = max(dp[1],max(dp[2],dp[3]));
                int min1 = min(dp[1],min(dp[2],dp[3]));
                res = min(res, max1 - min1 + 1);
            }
            
        }
    } 
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)