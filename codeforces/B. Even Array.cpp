/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
void solve(){
    cin >> n;
    set_vect(a,n);
    int cnt1= 0,cnt2 = 0;
    for(int i = 0 ; i < n ; i++){
        if(i % 2 == 0 && a[i] % 2 == 1)
            cnt1++;
        if(i % 2 == 1 && a[i] % 2 == 0)
            cnt2++;
    }
    if(cnt1 == cnt2) cout << cnt1;
    else cout << -1;
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)