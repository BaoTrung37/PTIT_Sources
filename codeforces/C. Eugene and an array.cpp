/**
 *    authur: Bao Trung (Koi Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>    >z;
int n,x;
i64 sum,ans;
map <i64,int> mp;
void solve(){
    cin >> n;
    mp[0] = 0;
    int q = -1  ;
    for(int i = 1 ; i <= n ; i++){
        cin >> x;
        sum += x;
        if(mp.count(sum)) q = max(q,mp[sum]);
        ans += i - q - 1;
        mp[sum] = i;
    }
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3