/**
 *    authur: Bao Trung (Koi` Cute)
 * https://codeforces.com/group/FLVn1Sc504/contest/274485/problem/M
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
int n,a[100002],b[100002];
void solve(){
    cin >> n;
    pair <double,int> c[n + 1];
    for(int i = 1 ; i <= n ;i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n ; i++){
        cin >> b[i];
        c[i].first =  b[i] * 1.0 / a[i];
        c[i].second = i;
    }
    sort(c + 1, c + n + 1);
    ll kq = 0, cnt = 0;
    for(int i = 1 ; i <= n ; i++){
        cnt += b[c[i].second];
        kq += cnt * a[c[i].second];
    }
    cout << kq << '\n';
    for(int i = 1; i <= n ; i++)
        cout << c[i].second << ' ';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3