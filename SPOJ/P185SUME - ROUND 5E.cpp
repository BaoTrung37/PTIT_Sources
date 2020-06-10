//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
int n;
void solve(){
    cin >> n;
    set_vect(a,n);
    sort(all(a));
    int sz = unique(all(a)) - a.begin();
    if(sz  > 3) puts("NO");
    else if(sz < 3) puts("YES");
    else puts(a[1] * 2 == a[0] + a[2] ? "YES" : "NO");  
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3