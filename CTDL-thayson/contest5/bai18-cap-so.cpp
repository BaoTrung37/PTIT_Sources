/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,a[2000],dp[2000];
bool cmp(pair <int,int> &a,pair <int,int> &b){
    return a.first < b.first;
}
void solve(){
    cin >> n;
    pair <int,int> a[n];
    int maxx = 0;
    for(int i = 0 ; i < n; i++)
        cin >> a[i].first >> a[i].second;

    sort(a,a+n,cmp);
    for(int i = 0 ; i < n ; i++)
        dp[i] = 1;
    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            if(a[i].first > a[j].second && dp[i] < dp[j] + 1)
                dp[i] = dp[j] + 1;
        }
    }
    
    for(int i = 0 ; i < n; i++)
        maxx = max(maxx,dp[i]);
    cout << maxx << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3


// void solve(){
//    int n,a[2000],dp[2000];
//     cin >> n;
//     for(int i = 0 ; i < n * 2; i++)
//         cin >> a[i];
//     memset(dp,0,sizeof(dp));
//     int res = 0;
//     for(int i = 0 ; i < 2 * n ; i++){
//         int tmp = 0;
//         for(int j = 0 ; j < i ; j++){
//             if(a[i] > a[j] && dp[j] > tmp){
//                 tmp = dp[j];
//             }
//         }
//         dp[i] = tmp + 1;
//         res = max(res,dp[i]);
//     }    
//     cout << res / 2 << '\n';    
// }