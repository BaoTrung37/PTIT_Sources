/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int nmax = 10005;

int n;
void solve(){
    cin >> n;
    set_vect(a,n);
    int i = n - 1;
    while(a[i - 1] >= a[i]) i--;
    int i2 = i;
    while(a[i2 - 1] <= a[i2]) i2--;
    cout << max(i2,0) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)