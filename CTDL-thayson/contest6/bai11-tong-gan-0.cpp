/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
void solve(){
    cin >> n;
    set_vect(a,n);
    int res = 1e9;
    for(int i = 0 ; i < n ; i++)
        for(int j = i + 1; j < n ; j++)
            if(abs(a[i] + a[j]) < abs(res))
                res = a[i] + a[j];
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)