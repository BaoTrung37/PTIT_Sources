/**
 *    authur: Bao Trung (Koi` Cute)
 * https://vietcodes.github.io/code/74/
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;

void solve(){
     int n, m; cin >> n >> m;
    vector<int> a(n);
    for (int &a: a) cin >> a;

    sort(a.begin(), a.end());

    int res = a[0] + a[1] + a[2];
    for (int i = 2; i<n; i++) {
        int s = m - a[i];

        int j = i-1, k = 0;
        while (j > k) {
            while (j > k && a[j]+a[k] > s) j--;
            while (j > k && a[j]+a[k] <= s) {
                res = max(res, a[i] + a[j] + a[k]);
                k++;
            }       
        }
    }

    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3