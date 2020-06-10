/**
 *    authur: Bao Trung <3
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int Nmax = 2002;
int n,a[Nmax],dp[Nmax],res = 0;
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)    
        cin >> a[i];
    for(int i = 0; i < n ; i++){
        dp[i] = 1;
        for(int j = 0 ; j < i ; j++){
            if(a[j] <= a[i] && dp[j] + 1 > dp[i])
                dp[i] = dp[j] + 1;
        }
    }
    res = *max_element(dp,dp + n);
    cout << n - res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3