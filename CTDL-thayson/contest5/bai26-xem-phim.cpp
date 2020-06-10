/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int s,n,a[102],dp[25001],res = 0;
void solve(){
    cin >> s >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    memset(dp,0,sizeof(dp));
    dp[0] = 1;
    for(int i = 0 ; i < n; i++){
        for(int j = s ; j >= a[i] ; j--){
            if(dp[j - a[i]]){
                dp[j] = 1;
                res = max(res,j);
            }
        }
    }
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3