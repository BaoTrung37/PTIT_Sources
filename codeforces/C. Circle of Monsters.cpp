/**
 *    authur: Bao Trung (Koi` Cute)
 * https://www.youtube.com/watch?v=j4wxy4Pkab8
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;

int n;
void solve(){
    cin >> n;
    vector <pair <ll,ll>> a(n);
    for(auto &[x,y] : a) cin >> x >> y;
    ll need = 0,mi = 1e15;
    for(int i = 0 ; i < n ; i++){
        int j = (i + n - 1) % n;
        need += max((ll) 0, a[i].first - a[j].second);
        mi = min(mi ,min(a[j].second,a[i].first));
    }
    cout << need + mi<< endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3