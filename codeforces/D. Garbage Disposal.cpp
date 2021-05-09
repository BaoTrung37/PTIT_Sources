/*
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
#define db(x) cerr << #x << " = "  << (x) << '\n';
const int nmax = 10005;

int n,k;
void solve(){
    cin >> n >> k;
    set_vect(a,n);
    int res = 0,du = 0;
    for(int i = 0 ; i < n ; i++){
        db(du)
        if(du != 0){
            res++;
            a[i] -= (k - du);
            if(a[i] < 0) a[i] = 0;
            du = 0;
        }
        res += a[i] / k;
        a[i] %= k;
        du += a[i];
    }
    if(du) res++;
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)