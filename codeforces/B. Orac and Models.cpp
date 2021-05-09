/*
    dùng DP để tính
    ý tưởng tìm mắc của fj = max(fi + 1)
    1
    4
    5 3 4 6
    
    2
    index 2 4 : vì 4 % 2 và 6 > 3
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,a[100005],dp[100005];
void solve(){
    cin >> n;
    int res = 0;
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];
    // memset dp = 1
    for(int i = 1 ; i <= n ; i++)
        dp[i] = 1;
    // 2 for để duyệt các phần tử chia hết cho ai
    for(int i = 1; i <= n; i++){
        for(int j = i * 2 ; j <= n ; j += i){
            if(a[j] > a[i]){
                dp[j] = max(dp[j],dp[i] + 1);
            }
        }
    }
    for(int i = 1 ; i <= n ; i++){
       //cout << dp[i] << ' ';
       res = max(res,dp[i]);
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