/*
    sử dụng dsu để tìm cây
    https://codeforces.com/contest/893/problem/C
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int nmax = 200005;

int n,m,x,y;
int a[nmax],b[nmax];
int find(int i){
    return (b[i] == 0) ? i : b[i] = find(b[i]);
}
void solve(){
    cin >> n >> m;
    ll res = 0;
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    for(int i = 1 ; i <= m ; i++){
        cin >> x >> y;
        x = find(x); y = find(y);
        if(x == y) continue;
        if(a[x] > a[y]){
            b[x] = y;
        }
        else b[y] = x;
    }
    for(int i = 1 ; i <= n ; i++ ) if(!b[i]) res += a[i];
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << " ms\n";
    return 0;
}

// Code By Pain (Bao Trung)