/**
 *    authur: Bao Trung
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n,a[12000],dp1[10002],dp2[10002],res;
void solve(){
    cin >> n;
    res = 0;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    for(int i = 0 ; i < n ; i++){
        dp1[i] = a[i];
        dp2[i] = a[i];
    }
        
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            if(a[j] < a[i]){
                dp1[i] = max(dp1[i], dp1[j] + a[i]);
            }
        }
    }
    for(int i = n - 1 ; i >= 0 ; i--){
        for(int j = n- 1 ; j > i ; j--){
            if(a[i] > a[j])
                dp2[i] = max(dp2[i],dp2[j] + a[i]);
        }
    }
    res = dp1[0] + dp2[0] - a[0];
    for(int i = 1 ; i < n ; i++)
        res = max(res , dp1[i] + dp2[i] - a[i]);
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3